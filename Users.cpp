#include "users.h"

QString usernames[100] = {"admin1", "admin2", "admin3", "admin4"};
QString passwords[100] = {"admin1", "admin2", "admin3", "admin4"};
int ages[100] = {10,10,10,10};
int usersCount = 100;
int count = 4;

bool isExist(QString &username)
{
    for(int i = 0; i < count; i++)
    {
        if(username == usernames[i])
            return true;
    }

    return false;
}
