#include "../../engine/scene/scene.h"

class CGameScene : public engine::scene::Scene
{
public:
    CGameScene(engine::core::Context& vContext, engine::scene::SceneManager& vSceneManager);
    ~CGameScene();
};