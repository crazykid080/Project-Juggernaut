################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FilesWin.cpp \
../Main.cpp \
../Payload.cpp \
../WindowsAttack.cpp 

OBJS += \
./FilesWin.o \
./Main.o \
./Payload.o \
./WindowsAttack.o 

CPP_DEPS += \
./FilesWin.d \
./Main.d \
./Payload.d \
./WindowsAttack.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


