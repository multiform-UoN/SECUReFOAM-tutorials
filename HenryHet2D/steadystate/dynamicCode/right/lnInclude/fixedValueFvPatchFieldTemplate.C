/*---------------------------------------------------------------------------*  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "fixedValueFvPatchFieldTemplate.H"
#include "addToRunTimeSelectionTable.H"
#include "fvPatchFieldMapper.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "unitConversion.H"
//{{{ begin codeInclude
#line 57 "/home/juan/testrhoDarcyFoam/HenryHet2D/steadystate/0/p/boundaryField/right"
#include "uniformDimensionedFields.H"
//}}} end codeInclude


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    // dynamicCode:
    // SHA1 = 52e5cdee863cd79fe6db56ac6210a02c31b71429
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void right_52e5cdee863cd79fe6db56ac6210a02c31b71429(bool load)
    {
        if (load)
        {
            // code that can be explicitly executed after loading
        }
        else
        {
            // code that can be explicitly executed before unloading
        }
    }
}

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

makeRemovablePatchTypeField
(
    fvPatchScalarField,
    rightFixedValueFvPatchScalarField
);


const char* const rightFixedValueFvPatchScalarField::SHA1sum =
    "52e5cdee863cd79fe6db56ac6210a02c31b71429";


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

rightFixedValueFvPatchScalarField::
rightFixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    fixedValueFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        Info<<"construct right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429"
            " from patch/DimensionedField\n";
    }
}


rightFixedValueFvPatchScalarField::
rightFixedValueFvPatchScalarField
(
    const rightFixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    fixedValueFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        Info<<"construct right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429"
            " from patch/DimensionedField/mapper\n";
    }
}


rightFixedValueFvPatchScalarField::
rightFixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const dictionary& dict
)
:
    fixedValueFvPatchField<scalar>(p, iF, dict)
{
    if (false)
    {
        Info<<"construct right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429"
            " from patch/dictionary\n";
    }
}


rightFixedValueFvPatchScalarField::
rightFixedValueFvPatchScalarField
(
    const rightFixedValueFvPatchScalarField& ptf
)
:
    fixedValueFvPatchField<scalar>(ptf)
{
    if (false)
    {
        Info<<"construct right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429"
            " as copy\n";
    }
}


rightFixedValueFvPatchScalarField::
rightFixedValueFvPatchScalarField
(
    const rightFixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    fixedValueFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        Info<<"construct right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429 "
            "as copy/DimensionedField\n";
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

rightFixedValueFvPatchScalarField::
~rightFixedValueFvPatchScalarField()
{
    if (false)
    {
        Info<<"destroy right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void rightFixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        Info<<"updateCoeffs right sha1: 52e5cdee863cd79fe6db56ac6210a02c31b71429\n";
    }

//{{{ begin code
    #line 41 "/home/juan/testrhoDarcyFoam/HenryHet2D/steadystate/0/p/boundaryField/right"
scalarField myPatch(this->patch().size());
            forAll(this->patch().Cf(),i)
            {
              myPatch[i]= 1024.99*9.8*(1. - this->patch().Cf()[i].z());
            }
            operator==(myPatch);
//}}} end code

    this->fixedValueFvPatchField<scalar>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

