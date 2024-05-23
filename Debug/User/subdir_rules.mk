################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
User/%.obj: ../User/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/Projects/DSP_Projects/DSP2833x_Libraries/DSP2833x_common/include" --include_path="D:/Projects/DSP_Projects/DSP2833x_Examples/2024_05_14_DSP2833x_Learning/User" --include_path="D:/Projects/DSP_Projects/DSP2833x_Examples/2024_05_14_DSP2833x_Learning/APP" --include_path="D:/Projects/DSP_Projects/DSP2833x_Libraries/DSP2833x_headers/include" --include_path="C:/ti/ccs1270/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="User/$(basename $(<F)).d_raw" --obj_directory="User" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


