#include "game_scene.h"

CGameScene::CGameScene(engine::core::Context& vContext, engine::scene::SceneManager& vSceneManager)
    : Scene("GameScene", vContext, vSceneManager)
{
}

CGameScene::~CGameScene()
{
}