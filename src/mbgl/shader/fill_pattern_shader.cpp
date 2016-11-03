#include <mbgl/shader/fill_pattern_shader.hpp>
#include <mbgl/shader/fill_pattern.vertex.hpp>
#include <mbgl/shader/fill_pattern.fragment.hpp>
#include <mbgl/shader/fill_vertex.hpp>

namespace mbgl {

FillPatternShader::FillPatternShader(gl::Context& context, gl::ShaderParameters& shaderParameters)
    : Shader(shaders::fill_pattern::name,
             shaders::fill_pattern::vertex,
             shaders::fill_pattern::fragment,
             context, shaderParameters),
      uniformsState(FillPatternUniforms::state(*this)) {
}

} // namespace mbgl
