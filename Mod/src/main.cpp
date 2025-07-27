#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        if (auto menu = this->getChildByID("social-media-menu")) {
            if (auto twitchBtn = menu->getChildByID("twitch-button"))
                twitchBtn->setVisible(false);

            if (auto discordBtn = menu->getChildByID("discord-button"))
                discordBtn->setVisible(false);
        }

        return true;
    }
};