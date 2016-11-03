#include <mbgl/shader/symbol_sdf_shader.hpp>
#include <mbgl/shader/symbol_sdf.vertex.hpp>
#include <mbgl/shader/symbol_sdf.fragment.hpp>
#include <mbgl/shader/symbol_vertex.hpp>

namespace mbgl {

SymbolSDFShader::SymbolSDFShader(gl::Context& context, gl::ShaderParameters& shaderParameters)
    : Shader(shaders::symbol_sdf::name,
             shaders::symbol_sdf::vertex,
             shaders::symbol_sdf::fragment,
             context, shaderParameters),
      uniformsState(SymbolSDFUniforms::state(*this)) {
}

} // namespace mbgl
