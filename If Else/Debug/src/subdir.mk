################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/If\ Else.cpp 

OBJS += \
./src/If\ Else.o 

CPP_DEPS += \
./src/If\ Else.d 


# Each subdirectory must supply rules for building sources it contributes
src/If\ Else.o: ../src/If\ Else.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/If Else.d" -MT"src/If\ Else.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


