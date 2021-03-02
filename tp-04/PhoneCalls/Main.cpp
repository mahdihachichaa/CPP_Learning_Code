#include "Person.h"
#include "Phone.h"
#include "HomePhone.h"
#include "MobilePhone.h"

int main()
{
    /*Person paul { "Paul", 3 };
    Phone  phone { paul };
    phone.ring();

    Person paul { "Paul", 3 };
    Phone  phone { paul };
    paul.set_position(8);*/

    /*Person paul { "Paul", 3 };
    HomePhone phone { paul };
    phone.ring();
*/

    /*Person paul { "Paul", 3 };

    HomePhone close_phone { paul, 3 };
    close_phone.ring();					// Hi! Paul on the phone.

    HomePhone far_phone { paul, -10 };
    far_phone.ring();					// This is the voicemail of Paul. Please leave a message.

    Person paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone& normal_phone = far_phone;
    normal_phone.ring();		

    Person paul { "Paul", 3 };
    MobilePhone mobile_phone { paul };

    const Phone& normal_phone = mobile_phone;
    normal_phone.ring();			*/	// Hi! Paul on the phone.
    Person paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone normal_phone = far_phone;
    normal_phone.ring();
    return 0;
}
