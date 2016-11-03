#include <mbgl/shader/circle_shader.hpp>
#include <mbgl/shader/circle.vertex.hpp>
#include <mbgl/shader/circle.fragment.hpp>
#include <mbgl/shader/circle_vertex.hpp>

namespace mbgl {

CircleShader::CircleShader(gl::Context& context, gl::ShaderParameters& shaderParameters)
    : Shader(shaders::circle::name,
             shaders::circle::vertex,
             shaders::circle::fragment,
             context, shaderParameters),
      uniformsState(CircleUniforms::state(*this)) {
}

} // namespace mbgl
