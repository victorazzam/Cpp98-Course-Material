################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bit\ Shifting.cpp 

OBJS += \
./src/Bit\ Shifting.o 

CPP_DEPS += \
./src/Bit\ Shifting.d 


# Each subdirectory must supply rules for building sources it contributes
src/Bit\ Shifting.o: ../src/Bit\ Shifting.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Bit Shifting.d" -MT"src/Bit\ Shifting.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


