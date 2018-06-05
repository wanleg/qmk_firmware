ifndef QUANTUM_DIR
	include ../../../../Makefile
endif

TAP_DANCE_ENABLE = yes
MOUSEKEY_ENABLE = yes	# Mouse keys(+4700)

###use to save space
EXTRAKEY_ENABLE = no       # Audio control and System control(+450)
CONSOLE_ENABLE = no        # Console for debug(+400)
NKRO_ENABLE = no          # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
AUDIO_ENABLE = no           # Audio output on port C6