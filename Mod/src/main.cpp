#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto version = Mod::get()->getSettingValue<std::string>("version");
        auto robtopLogo = Mod::get()->getSettingValue<bool>("robtop-logo");

        if (auto menu = this->getChildByID("social-media-menu")) {
            if (version == "1.9 - 2.1") {
                if (auto twitchBtn = menu->getChildByID("twitch-button"))
                    twitchBtn->setVisible(false);
                if (auto discordBtn = menu->getChildByID("discord-button"))
                    discordBtn->setVisible(false);
            }
            else if (version == "1.3 - 1.8") {
                if (auto youtubeBtn = menu->getChildByID("youtube-button"))
                    youtubeBtn->setVisible(false);
                if (auto twitchBtn = menu->getChildByID("twitch-button"))
                    twitchBtn->setVisible(false);
                if (auto discordBtn = menu->getChildByID("discord-button"))
                    discordBtn->setVisible(false);
            }
            else if (version == "1.0 - 1.2") {
                if (auto facebookBtn = menu->getChildByID("facebook-button"))
                    facebookBtn->setVisible(false);
                if (auto twitterBtn = menu->getChildByID("twitter-button"))
                    twitterBtn->setVisible(false);
                if (auto youtubeBtn = menu->getChildByID("youtube-button"))
                    youtubeBtn->setVisible(false);
                if (auto twitchBtn = menu->getChildByID("twitch-button"))
                    twitchBtn->setVisible(false);
                if (auto discordBtn = menu->getChildByID("discord-button"))
                    discordBtn->setVisible(false);
            }

            if (!robtopLogo) {
                if (auto robTopLogoBtn = menu->getChildByID("robtop-logo-button"))
                    robTopLogoBtn->setVisible(false);
            }
        }

        return true;
    }
};