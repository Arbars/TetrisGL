#pragma once

#include "Figure.h"

class Palette
{
private:

  Palette();
  ~Palette();

  static void loadValue(rapidjson::Value & source, const char * name, float * result);
  static void loadValue(rapidjson::Value & source, const char * name, glm::vec3 * result);

public:
  static glm::vec3 gameBackgroundOuter;
  static glm::vec3 gameBackgroundInner;
  static glm::vec3 glassBackgroundMin;
  static glm::vec3 glassBackgroundMax;
  static glm::vec3 scoreBarBackground;
  static glm::vec3 scoreBarMenuButtonBackground;
  static glm::vec3 scoreBarText;
  static glm::vec3 scoreBarMenuButtonText;
  static glm::vec3 holdCaptionText;
  static glm::vec3 holdEmptyPanel;
  static glm::vec3 nextCaptionText;
  static glm::vec3 nextEmptyPanel;
  static glm::vec3 levelCaptionText;
  static glm::vec3 levelPanelBackground;
  static glm::vec3 levelPanelText;
  static glm::vec3 goalCaptionText;
  static glm::vec3 goalPanelBackground;
  static glm::vec3 goalPanelText;
  static glm::vec3 figureRed;
  static glm::vec3 figureOrange;
  static glm::vec3 figureYellow;
  static glm::vec3 figureGreen;
  static glm::vec3 figureCyan;
  static glm::vec3 figureBlue;
  static glm::vec3 figurePurple;
  static glm::vec3 figureShadow;
  static glm::vec3 menuNormalRowBackgroundTop;
  static glm::vec3 menuNormalRowBackgroundBottom;
  static glm::vec3 menuSelectedRowBackgroundTop;
  static glm::vec3 menuSelectedRowBackgroundBottom;
  static glm::vec3 menuNormalRowText;
  static glm::vec3 menuSelectedRowText;
  static glm::vec3 menuNormalRowGlow;
  static glm::vec3 menuSelectedRowGlow;
  static glm::vec3 figureColorArray[Figure::Color::COLOR_COUNT];

  static float figureGlowOuterBright;
  static float figureGlowInnerBright;
  static float deletedRowFlashBright;
  static float deletedRowRaysBright;
  static float deletedRowShineBright;
  static float glassBackgroundInnerBright;

  static void load(const char * name);
};
