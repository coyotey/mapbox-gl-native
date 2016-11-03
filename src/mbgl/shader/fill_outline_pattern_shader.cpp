#include <mbgl/shader/fill_outline_pattern_shader.hpp>
#include <mbgl/shader/fill_outline_pattern.vertex.hpp>
#include <mbgl/shader/fill_outline_pattern.fragment.hpp>
#include <mbgl/shader/fill_vertex.hpp>

namespace mbgl {

FillOutlinePatternShader::FillOutlinePatternShader(gl::Context& context, gl::ShaderParameters& shaderParameters)
    : Shader(shaders::fill_outline_pattern::name,
             shaders::fill_outline_pattern::vertex,
             shaders::fill_outline_pattern::fragment,
             context, shaderParameters),
      uniformsState(FillPatternUniforms::state(*this)) {
}

} // namespace mbgl
