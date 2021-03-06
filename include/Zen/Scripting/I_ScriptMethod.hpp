//-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~
// Zen Scripting Framework
//
// Copyright (C) 2001 - 2016 Raymond A. Richards
//-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~
#ifndef ZEN_SCRIPTING_I_SCRIPT_METHOD_HPP_INCLUDED
#define ZEN_SCRIPTING_I_SCRIPT_METHOD_HPP_INCLUDED

#include "Configuration.hpp"

#include <Zen/Scripting/forward_declarations.hpp>

#include <boost/any.hpp>

#include <vector>

//-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~
namespace Zen {
namespace Scripting {
//-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~
class I_ScriptWrapper;

class SCRIPTING_DLL_LINK I_ScriptMethod
{
    /// @name Types
    /// @{
public:
    typedef I_ScriptWrapper*                                          pScriptWrapper_type;
    /// @}

    /// @name I_ScriptMethod interface
    /// @{
public:
    /// Dispatch the method.
    virtual boost::any dispatch(pScriptWrapper_type _pScriptWrapper, std::vector<boost::any>& _arguments) = 0;
    /// @}

    /// @name 'Structors
    /// @{
protected:
             I_ScriptMethod() = default;
public:
    virtual ~I_ScriptMethod() = default;
    /// @}

};  // interface I_ScriptMethod

//-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~
}   // namespace Scripting
}   // namespace Zen
//-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

#endif // ZEN_SCRIPTING_I_SCRIPT_METHOD_HPP_INCLUDED
