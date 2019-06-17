CXX   = g++
LD    = g++
OBJS_DIR = obj

ifeq ($(DEBUG), 1)
CXXFLAGS = -g -O0 -DDEBUG -std=c++11
TARGET = bookshelf_writer
else ifeq ($(UNIT_TEST), 1)
CXXFLAGS = -g -O0 -DUNIT_TEST -DDEBUG -std=c++11
TARGET = bookshelf_writer_t
else
CXXFLAGS = -O3 -std=c++11
TARGET = bookshelf_writer
endif

CXXFLAGS += 
DEPEND_FILE = $(OBJS_DIR)/depend_file

SRCS      = $(wildcard *.cpp) $(wildcard **/*.cpp) $(wildcard */*/*.cpp)
OBJS      = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:%.cpp=%.o)))
#LDFLAGS   = -L/usr/local/lib -L./lib/linux
LDFLAGS   = -L/usr/local/lib -L./lib/osx 
LIBS      = -llef -ldef -lstdc++
INCLUDES  = -I./
INCLUDES += -I./include
INCLUDES += -I./lefdef
INCLUDES += -I./util
INCLUDES += -I./common
INCLUDES += -I/usr/local/include

.SUFFIXES : .cpp .o

#-------------------------------------------------------------------------------
# Make Rules
#-------------------------------------------------------------------------------
all: $(TARGET)

$(TARGET): $(OBJS)
	@echo -e "=\033[0;36m Creating \033[0;0m  $@"
	@$(CXX) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)
	@ctags `find . -name '*.h' -or -name '*.cpp' -or -name '*.hpp'`

$(OBJS):
	@echo -e "=\033[0;32m Compiling \033[0;0m $<"
	@`[ -d $(OBJS_DIR) ] || mkdir $(OBJS_DIR)`
	@$(CXX) $(CXXFLAGS) $(DEFINES) $(INCLUDES) -c $< -o $@

depend:
	@`[ -d $(OBJS_DIR) ] || mkdir $(OBJS_DIR)`
	@rm -f $(DEPEND_FILE)
	@for FILE in $(SRCS:%.cpp=%); do \
		$(CXX) -MM -MT $(OBJS_DIR)/`basename $$FILE.o` $$FILE.cpp \
			$(CXXFLAGS) $(DEFINES) $(INCLUDES) >> $(DEPEND_FILE); \
	done

tags: $(SRCS) Makefile
	ctags `find . -name '*.h' -or -name '*.cpp' -or -name '*.hpp'`

clean:
	rm -f $(TARGET)
	rm -rf $(OBJS_DIR)

ifneq ($(MAKECMDGOALS), clean)
ifneq ($(MAKECMDGOALS), depend)
ifneq ($(SRCS),)
-include $(DEPEND_FILE)
endif
endif
endif

