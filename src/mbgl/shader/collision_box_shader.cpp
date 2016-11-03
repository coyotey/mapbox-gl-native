#include <mbgl/shader/collision_box_shader.hpp>
#include <mbgl/shader/collision_box.vertex.hpp>
#include <mbgl/shader/collision_box.fragment.hpp>
#include <mbgl/shader/collision_box_vertex.hpp>

namespace mbgl {

CollisionBoxShader::CollisionBoxShader(gl::Context& context, gl::ShaderParameters& shaderParameters)
    : Shader(shaders::collision_box::name,
             shaders::collision_box::vertex,
             shaders::collision_box::fragment,
             context, shaderParameters),
      uniformsState(CollisionBoxUniforms::state(*this))
{
}

} // namespace mbgl
