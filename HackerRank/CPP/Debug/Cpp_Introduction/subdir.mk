################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Cpp_Introduction/Arrays_Introduction.cpp \
../Cpp_Introduction/For_Loop.cpp \
../Cpp_Introduction/Functions.cpp 

OBJS += \
./Cpp_Introduction/Arrays_Introduction.o \
./Cpp_Introduction/For_Loop.o \
./Cpp_Introduction/Functions.o 

CPP_DEPS += \
./Cpp_Introduction/Arrays_Introduction.d \
./Cpp_Introduction/For_Loop.d \
./Cpp_Introduction/Functions.d 


# Each subdirectory must supply rules for building sources it contributes
Cpp_Introduction/%.o: ../Cpp_Introduction/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


