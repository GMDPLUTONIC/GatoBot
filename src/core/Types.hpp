#pragma once

#include <vector>
#include <Geode/binding/PlayerButtonCommand.hpp>

enum BotStatus { Idle, Recording, Replaying, Rendering };

struct PlayerData {
    float m_posX;
    float m_posY;
    double m_yVel;
};

struct TPSLockData {
    double m_val1;
    int m_val2;
    float m_val3;
};

struct FrameState {
    int m_frame;
    
    // shit that influences frame delta idk what to name these
    double m_unk1;
    int m_unk2;
    float m_unk3;
};

struct LevelFrame {
    int m_frame;

    // PlayerData m_player1;
    // PlayerData m_player2;

    gd::vector<PlayerButtonCommand> m_commands;

    // only used in recording
    FrameState m_frameState;
};

struct RenderParams {
    const char* m_codec;
    std::string m_outputPath;

    int m_width;
    int m_height;
    int m_fps;
};