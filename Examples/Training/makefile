#############################################################################
#                                                                           #
#	!File				: makefile											#
#                                                                           #
#	!Description		: makefile to build and generate capldll.dll		#
#                                                                           #
#	!Target				: Windows                                           #
#                                                                           #
#	!Author				: Omar Hazem                                        #
#                                                                           #
#	Coding language		: make												#
#                                                                           #
#############################################################################

# Build environment configurations
COMPILER_PATH	= C:/prjtools/mingw32/ver_3.82.90/bin

# Project structure configurations
OUTDIR	= build
SRCS	= $(sort $(wildcard *.c))
OBJS	= $(SRCS:%.c=$(OUTDIR)/%.o)
DEPS	= $(SRCS:%.c=$(OUTDIR)/%.d)
OUT		= main

# Toolchain
CC		= $(COMPILER_PATH)/gcc
LINKER	= $(COMPILER_PATH)/gcc

# Compiler options
CFLAGS =							\
	-Wall
# Linker options
LFLAGS =	\
	-s	

# Main Target
#------------
all: $(OUT)
# Include all .d files if exists
-include $(DEPS)
# set cmd as default shell for make
SHELL=cmd.exe

# File1
#--------
# Link and generate File1.exe
#------------------------------
$(OUT): $(OUT).exe

$(OUT).exe: $(OBJS)
	@echo Generate $@
	@$(LINKER) $(LFLAGS) $(OBJS) -o $@
	@echo Build OK

$(OUTDIR)/%.o: %.c | $(OUTDIR)
	@echo Compile $(notdir $<)
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

$(OUTDIR):
	@mkdir $(OUTDIR)

# Clean build
#------------
clean:
	@if exist *.exe			del *.exe
	@if exist $(OUTDIR)\*.o	del $(OUTDIR)\*.o
	@if exist $(OUTDIR)\*.d	del $(OUTDIR)\*.d
	@echo Clean OK


#-------------------------------- end of file -------------------------------#
