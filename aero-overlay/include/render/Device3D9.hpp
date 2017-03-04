#pragma once
#ifndef REACTIION_AERO_OVERLAY_DEVICE3D9_HPP
#define REACTIION_AERO_OVERLAY_DEVICE3D9_HPP
#include "Overlay.hpp"

namespace render {

class Device3D9 :
    public Overlay
{
public:
    Device3D9() = default;
    ~Device3D9() override;
    bool create( const std::string& target_window_title ) override;
    bool begin_scene() override;
    void end_scene() override;
    void shutdown() override;

private:
    IDirect3D9Ex*       m_Direct3D9Ex     = nullptr;
    IDirect3DDevice9Ex* m_Direct3D9Device = nullptr;
};

}

#endif