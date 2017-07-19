#include <Bindings/AnimationBindings.hpp>

namespace obe
{
    namespace Bindings
    {
        namespace AnimationBindings
        {
            void LoadAnimationGroup(kaguya::State& lua)
            {
                lua["Core"]["Animation"]["AnimationGroup"].setClass(kaguya::UserdataMetatable<Animation::AnimationGroup>()
                    .addFunction("build", &Animation::AnimationGroup::build)
                    .addFunction("forceNext", &Animation::AnimationGroup::forceNext)
                    .addFunction("forcePrevious", &Animation::AnimationGroup::forcePrevious)
                    .addFunction("getGroupDelay", &Animation::AnimationGroup::getGroupDelay)
                    .addFunction("getGroupIndex", &Animation::AnimationGroup::getGroupIndex)
                    .addFunction("getGroupName", &Animation::AnimationGroup::getGroupName)
                    .addFunction("getGroupSize", &Animation::AnimationGroup::getGroupSize)
                    .addFunction("getTexture", &Animation::AnimationGroup::getTexture)
                    .addFunction("isGroupOver", &Animation::AnimationGroup::isGroupOver)
                    .addFunction("next", &Animation::AnimationGroup::next)
                    .addFunction("previous", &Animation::AnimationGroup::previous)
                    .addFunction("pushTexture", &Animation::AnimationGroup::pushTexture)
                    .addFunction("removeTextureByIndex", &Animation::AnimationGroup::removeTextureByIndex)
                    .addFunction("reset", &Animation::AnimationGroup::reset)
                    .addFunction("setGroupDelay", &Animation::AnimationGroup::setGroupDelay)
                    .addFunction("setGroupLoop", &Animation::AnimationGroup::setGroupLoop)
                    .addFunction("update", &Animation::AnimationGroup::update)
                );
            }
            void LoadAnimation(kaguya::State& lua)
            {
                lua["Core"]["Animation"]["Animation"].setClass(kaguya::UserdataMetatable<Animation::Animation>()
                    .setConstructors<Animation::Animation()>()
                    .addFunction("applyParameters", &Animation::Animation::applyParameters)
                    .addFunction("getAllAnimationGroupName", &Animation::Animation::getAllAnimationGroupName)
                    .addFunction("getAnimationDelay", &Animation::Animation::getAnimationDelay)
                    .addFunction("getAnimationGroup", &Animation::Animation::getAnimationGroup)
                    .addFunction("getAnimationName", &Animation::Animation::getAnimationName)
                    .addFunction("getAnimationPlayMode", &Animation::Animation::getAnimationPlayMode)
                    .addFunction("getAnimationStatus", &Animation::Animation::getAnimationStatus)
                    .addFunction("getCalledAnimation", &Animation::Animation::getCalledAnimation)
                    .addFunction("getCurrentAnimationGroup", &Animation::Animation::getCurrentAnimationGroup)
                    .addFunction("getPriority", &Animation::Animation::getPriority)
                    .addFunction("getSpriteOffsetX", &Animation::Animation::getSpriteOffsetX)
                    .addFunction("getSpriteOffsetY", &Animation::Animation::getSpriteOffsetY)
                    .addFunction("getTexture", &Animation::Animation::getTexture)
                    .addFunction("getTextureAtIndex", &Animation::Animation::getTextureAtIndex)
                    .addFunction("isAnimationOver", &Animation::Animation::isAnimationOver)
                    .addFunction("loadAnimation", &Animation::Animation::loadAnimation)
                    .addFunction("reset", &Animation::Animation::reset)
                    .addFunction("update", &Animation::Animation::update)
                );
            }
            void LoadAnimator(kaguya::State& lua)
            {
                lua["Core"]["Animation"]["Animator"].setClass(kaguya::UserdataMetatable<Animation::Animator>()
                    .addFunction("clear", &Animation::Animator::clear)
                    .addFunction("getAnimation", &Animation::Animator::getAnimation)
                    .addFunction("getKey", &Animation::Animator::getKey)
                    .addFunction("getSpriteOffsetX", &Animation::Animator::getSpriteOffsetX)
                    .addFunction("getSpriteOffsetY", &Animation::Animator::getSpriteOffsetY)
                    .addFunction("getTexture", &Animation::Animator::getTexture)
                    .addFunction("getTextureAtKey", &Animation::Animator::getTextureAtKey)
                    .addFunction("loadAnimator", &Animation::Animator::loadAnimator)
                    .addFunction("setKey", &Animation::Animator::setKey)
                    .addFunction("textureChanged", &Animation::Animator::textureChanged)
                    .addFunction("update", &Animation::Animator::update)
                );
            }
        }
    }
}