#!/bin/bash
# Submission script for Cluster
#
#SBATCH - N 1                                    # Number of nodes.
#SBATCH -n 1                                     # Number of cores(CPUs)
#SBATCH -t 10-02:00                              # Duration (D-HH:MM)
#SBATCH -o slurm.%N, %testP1.out                 #STDOUT
#SBATCH -e slurm.%N, %testP1.err                 #STDERR
#SBATCH --job-name=testP1                        # job name
#SBATCH --mail-type=END,FAIL                     # Notificación cuando el trabajo termina o falla
#SBATCH -- mail-user=juanj.hidalgo@idaea.csic.es # Enviar correo a la dirección

#Otras opciones
#SBATC -p generic       # Partición (cola)
#SBATC --ntasks=1
#SBATC --cpus-per-task=1
#SBATC --mem-per-cpu=2625 # megabytes
#SBATC --comment=openFOAM
#SBATC –mem 100    # Bloque de memoria para todos los nodos
#

module load OpenFOAM/8-foss-2020a.lua 

. $FOAM_BASH

reconstructParMesh -constant
reconstructPar -fields '(c)'

