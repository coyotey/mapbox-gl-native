#pragma once

#include <mbgl/shader/circle_shader.hpp>
#include <mbgl/shader/fill_shader.hpp>
#include <mbgl/shader/fill_pattern_shader.hpp>
#include <mbgl/shader/fill_outline_shader.hpp>
#include <mbgl/shader/fill_outline_pattern_shader.hpp>
#include <mbgl/shader/line_shader.hpp>
#include <mbgl/shader/line_sdf_shader.hpp>
#include <mbgl/shader/line_pattern_shader.hpp>
#include <mbgl/shader/raster_shader.hpp>
#include <mbgl/shader/symbol_icon_shader.hpp>
#include <mbgl/shader/symbol_sdf_shader.hpp>

#include <mbgl/shader/collision_box_shader.hpp>

namespace mbgl {

class Shaders {
public:
    Shaders(gl::Context& context, gl::ShaderParameters& shaderParameters)
        : circle(context, shaderParameters),
          fill(context, shaderParameters),
          fillPattern(context, shaderParameters),
          fillOutline(context, shaderParameters),
          fillOutlinePattern(context, shaderParameters),
          line(context, shaderParameters),
          lineSDF(context, shaderParameters),
          linePattern(context, shaderParameters),
          raster(context, shaderParameters),
          symbolIcon(context, shaderParameters),
          symbolIconSDF(context, shaderParameters),
          symbolGlyph(context, shaderParameters),
          collisionBox(context, shaderParameters) {
    }

    CircleShader circle;
    FillShader fill;
    FillPatternShader fillPattern;
    FillOutlineShader fillOutline;
    FillOutlinePatternShader fillOutlinePattern;
    LineShader line;
    LineSDFShader lineSDF;
    LinePatternShader linePattern;
    RasterShader raster;
    SymbolIconShader symbolIcon;
    SymbolSDFShader symbolIconSDF;
    SymbolSDFShader symbolGlyph;

    CollisionBoxShader collisionBox;
};

} // namespace mbgl
