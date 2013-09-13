//-----------------------------------------------------------------------bl-
//--------------------------------------------------------------------------
// 
// GRINS - General Reacting Incompressible Navier-Stokes 
//
// Copyright (C) 2010-2013 The PECOS Development Team
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the Version 2.1 GNU Lesser General
// Public License as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc. 51 Franklin Street, Fifth Floor,
// Boston, MA  02110-1301  USA
//
//-----------------------------------------------------------------------el-
//
// $Id$
//
//--------------------------------------------------------------------------
//--------------------------------------------------------------------------

// This class
#include "grins/neumann_func_obj.h"

// GRINS
#include "grins/cached_values.h"

// libMesh
#include "libmesh/vector_value.h"
#include "libmesh/fem_context.h"

namespace GRINS
{
  template<typename FEShape>
  NeumannFuncObj<FEShape>::NeumannFuncObj( )
    : NeumannFuncObjBase()
  {
    return;
  }

  template<typename FEShape>
  NeumannFuncObj<FEShape>::~NeumannFuncObj( )
  {
    return;
  }

  template<typename FEShape>
  typename NeumannFuncObj<FEShape>::OutputType NeumannFuncObj<FEShape>::value( const libMesh::FEMContext&,
                                                                               const CachedValues&,
                                                                               const unsigned int )
  {
    // By default, does nothing.
    /* \todo Should we libmesh_error() instead?*/
    return typename NeumannFuncObj<FEShape>::OutputType();
  }

  template<typename FEShape>
  FEShape NeumannFuncObj<FEShape>::normal_value( const libMesh::FEMContext&,
                                                 const CachedValues&,
                                                 const unsigned int )
  {
    // By default, does nothing.
    /* \todo Should we libmesh_error() instead?*/
    return FEShape();
  }

  template<typename FEShape>
  typename NeumannFuncObj<FEShape>::OutputType NeumannFuncObj<FEShape>::derivative( const libMesh::FEMContext&,
                                                                                    const CachedValues&,
                                                                                    const unsigned int )
  {
    // By default, does nothing.
    /* \todo Should we libmesh_error() instead?*/
    return typename NeumannFuncObj<FEShape>::OutputType();
  }

  template<typename FEShape>
  typename NeumannFuncObj<FEShape>::OutputType NeumannFuncObj<FEShape>::derivative( const libMesh::FEMContext&,
                                                                                    const CachedValues&,
                                                                                    const unsigned int,
                                                                                    const VariableIndex )
  {
    // By default, does nothing.
    /* \todo Should we libmesh_error() instead?*/
    return typename NeumannFuncObj<FEShape>::OutputType();
  }
  

  template<typename FEShape>
  FEShape NeumannFuncObj<FEShape>::normal_derivative( const libMesh::FEMContext&,
                                                      const CachedValues&,
                                                      const unsigned )
  {
    // By default, does nothing.
    /* \todo Should we libmesh_error() instead?*/
    return FEShape();
  }

  template<typename FEShape>
  FEShape NeumannFuncObj<FEShape>::normal_derivative( const libMesh::FEMContext&,
                                                      const CachedValues&,
                                                      const unsigned int, 
                                                      const VariableIndex )
  {
    // By default, does nothing.
    /* \todo Should we libmesh_error() instead?*/
    return FEShape();
  }
  

} // namespace GRINS

// Instantiate
template class GRINS::NeumannFuncObj<libMesh::Real>;
template class GRINS::NeumannFuncObj<libMesh::RealGradient>;
