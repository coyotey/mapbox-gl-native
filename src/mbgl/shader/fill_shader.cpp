#include <mbgl/shader/fill_shader.hpp>
#include <mbgl/shader/fill.vertex.hpp>
#include <mbgl/shader/fill.fragment.hpp>
#include <mbgl/shader/fill_vertex.hpp>

namespace mbgl {

FillShader::FillShader(gl::Context& context, gl::ShaderParameters& shaderParameters)
    : Shader(shaders::fill::name,
             shaders::fill::vertex,
             shaders::fill::fragment,
             context, shaderParameters),
      uniformsState(FillColorUniforms::state(*this)) {
}

} // namespace mbgl
