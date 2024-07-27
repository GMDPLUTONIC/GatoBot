#include <Geode/Geode.hpp>
#include <Geode/modify/CCScheduler.hpp>

#include <core/Bot.hpp>

using namespace geode::prelude;

class $modify(CCScheduler) {
    void update(float dt) {
        auto bot = GatoBot::get();

        bot->applyWinSize();

        bot->updateBot(dt);
        CCScheduler::update(dt);

        bot->restoreWinSize();
    }
};