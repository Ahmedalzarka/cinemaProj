#ifndef USERS_H
#define USERS_H

#include <QString>
extern QString usernames[100];
extern QString passwords[100];
extern int ages[100];
extern int usersCount;
extern int count;
extern bool isExist(QString &username);
#endif // USERS_H
