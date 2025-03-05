# Config ######################################################################
TARGET=RME
CPU=-m64

CC=gcc
CFLAGS=-O3 -fmessage-length=0 -w
WFLAGS=-Wall
DFLAGS=-g3
OBJDIR=Object
# End Config ##################################################################

# Source ######################################################################
INCS+=-I.
INCS+=-I/usr/include/x86_64-linux-gnu
INCS+=-I../../Include

CSRCS+=./UVM.c
CSRCS+=../../Source/Kernel/rme_kernel.c
CSRCS+=../../Source/Platform/X64/rme_platform_x64.c
#CSRCS+=../../Source/Benchmark/rme_benchmark.c

LIBS=-lpthread
# End Source ##################################################################

# User ########################################################################
-include user
# End User ####################################################################

# Build #######################################################################
COBJS=$(CSRCS:%.c=%.o)
CDEPS=$(CSRCS:%.c=%.d)

DEP=$(OBJDIR)/$(notdir $(@:%.o=%.d))
OBJ=$(OBJDIR)/$(notdir $@)

# Build all
all: mkdir $(COBJS) $(TARGET)

# Create output folder
mkdir:
	$(shell if [ ! -e $(OBJDIR) ];then mkdir -p $(OBJDIR); fi)

# Compile C sources
%.o:%.c
	@echo "    CC      $(notdir $<)"
	@$(CC) -c $(CPU) $(INCS) $(CFLAGS) $(DFLAGS) $(WFLAGS) -MMD -MP -MF "$(DEP)" "$<" -o "$(OBJ)";

$(TARGET): $(COBJS)
	@echo "    BIN     $(notdir $@)"
	@$(CC) $(OBJDIR)/*.o $(CPU) -static $(LIBS) -o $(OBJ)

# Clean up
.PHONY: clean
clean:
	-rm -rf $(OBJDIR)

# Dependencies
-include $(wildcard $(OBJDIR)/*.d)
# End Build ###################################################################

# End Of File #################################################################
