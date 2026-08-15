EventScript_RepelWoreOff::
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	special GetReusableRepelItem
	goto_if_eq VAR_0x8004, 0, EventScript_RepelWoreOff_End
	msgbox Text_UseAnotherRepel, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RepelWoreOff_End
	special UseReusableRepel
	waitse
	msgbox gStringVar4, MSGBOX_SIGN
EventScript_RepelWoreOff_End::
	closemessage
	end

Text_RepelWoreOff::
	.string "REPEL's effect wore off…$"

Text_UseAnotherRepel::
	.string "Would you like to use another\n{STR_VAR_1}?$"
