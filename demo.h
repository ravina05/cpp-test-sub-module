#include <iostream>
#include "base.h"

class Test
{
    
    public:
        Test(){};
        /*----------------DI(Dependency injection)---------------------------*/
        void set_mobile(Mobile* mobile)
        {
            m_mobile = mobile;
        }
        void show_details()
        {
            m_mobile->brand_name();
            m_mobile->camera();
            m_mobile->color();
            m_mobile->ram_size();
        }
    private:
        Mobile* m_mobile = nullptr; /* NULL*/

};