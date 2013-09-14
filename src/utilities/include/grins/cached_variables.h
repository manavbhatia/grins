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

#ifndef GRINS_CACHED_VARIABLES_H
#define GRINS_CACHED_VARIABLES_H

namespace GRINS
{

  class CachedVariables
  {
  public:

    CachedVariables();
    ~CachedVariables();

    unsigned int add_variable( const std::string& var_name );

    bool have_variable( const std::string& var_name );

    bool have_variable( const unsigned int var_index );

    std::string var_name( const unsigned int var_index );

    

  protected:

    std::vector<std::string> _var_names;

    std::vector<unsigned int> _var_indices;

  };

} // end namespace GRINS

#endif // GRINS_CACHED_VARIABLES_H
