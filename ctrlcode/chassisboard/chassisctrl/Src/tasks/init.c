#include "main.h"
MotorInfo whe[4];
void chasmotinit()
{
    yaw = motparainit(gm6020);
    yaw.setup.motid = yawmotid;

    pit = motparainit(gm6020);
    pit.setup.motid = pitmotid;

    for (int8_t i = 0; i < 4; i++)
    {
        whe[i] = motparainit(m3508);
        whe[i].setup.motid = wheid + i;
    }
}

void devinit()
{
    RC_INIT();
    can_filter_init();
}
