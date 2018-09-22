// main.cpp
#include <amqp.h>
#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
    //printf("librabbitmq version: %d.%d.%d.%d\n", AMQP_VERSION_MAJOR, AMQP_VERSION_MINOR, AMQP_VERSION_PATCH, AMQP_VERSION_IS_RELEASE);
	printf("librabbitmq version: %s\n", AMQP_VERSION_STRING);
	
    return 0;
}
