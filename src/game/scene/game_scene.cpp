#include "game_scene.h"
#include <spdlog/spdlog.h>
#include "../../engine/core/context.h"
#include "../../engine/input/input_manager.h"

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
    input_manager.onAction("attack").connect<&CGameScene::onAttack>(this);
    input_manager.onAction("jump", engine::input::ActionState::RELEASED).connect<&CGameScene::onJump>(this);
}

void CGameScene::clean()
{    
    auto& input_manager = context_.getInputManager();
    input_manager.onAction("attack").disconnect<&CGameScene::onAttack>(this);
    input_manager.onAction("jump", engine::input::ActionState::RELEASED).disconnect<&CGameScene::onJump>(this);
}

void CGameScene::onAttack()
{
    spdlog::info("onAttack");
}

void CGameScene::onJump()
{
    spdlog::info("onJump");
}