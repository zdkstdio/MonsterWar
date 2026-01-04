#include "game_scene.h"

CGameScene::CGameScene(engine::core::Context& vContext, engine::scene::SceneManager& vSceneManager)
    : Scene("GameScene", vContext, vSceneManager)
{
}

CGameScene::~CGameScene()
{
}

void CGameScene::init()
{
    auto& input_manager = context_.getInputManager();
    input_manager.onAction("attack").connect<&GameScene::onAttack>(this);
    input_manager.onAction("jump", engine::input::ActionState::RELEASED).connect<&GameScene::onJump>(this);
}

void CGameScene::clean()
{    
    auto& input_manager = context_.getInputManager();
    input_manager.onAction("attack").disconnect<&GameScene::onAttack>(this);
    input_manager.onAction("jump", engine::input::ActionState::RELEASED).disconnect<&GameScene::onJump>(this);
}

void CGameScene::onAttack()
{
    

}

void CGameScene::onJump()
{
    std::cout << "Jump" << std::endl;
}