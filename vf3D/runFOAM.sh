#!/bin/bash
# Submission script for Cluster
#
#SBATCH -p normal      # Partición (cola)
#SBATCH -N 1                                    # Number of nodes.
#SBATCH -n 16                                   # Number of cores(CPUs)
#SBATCH -t 10-00:00                             # Duration (D-HH:MM)
#SBATC -o slurm.%N, %testP1.out                 #STDOUT
#SBATC -e slurm.%N, %testP1.err                 #STDERR
#SBATCH --job-name=visc3d                       # job name
#SBATCH --mail-type=END,FAIL                    # Notificación cuando el trabajo termina o falla
#SBATCH -- mail-user=juanj.hidalgo@idaea.csic.es # Enviar correo a la dirección

#Otras opciones
#SBATC -p generic       # Partición (cola)
#SBATC --ntasks=1
#SBATC --cpus-per-task=1
#SBATC --mem-per-cpu=2625 # megabytes
#SBATC --comment=openFOAM
#SBATC –mem 100    # Bloque de memoria para todos los nodos
#


#export OMP_NUM_THREADS=24
#export MKL_NUM_THREADS=24

module load OpenFOAM/8-foss-2020a.lua 

. $FOAM_BASH

blockMesh
decomposePar -force
mpirun -np 16 snappyHexMesh -parallel -overwrite
mpirun -np 16 renumberMesh  -parallel -overwrite
reconstructParMesh -constant
decomposePar -force
mpirun -np 16 rhoDarcyFoam -parallel
#reconstructPar -fields '(c)'
