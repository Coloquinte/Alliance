
;  ###----------------------------------------------------------------###
;  # file	: exc000.s						#
;  # date	: Mar 26 1996						#
;  # descr.	: functional test for mips				#
;  ###----------------------------------------------------------------###

	;  ###--------------------------------------------------------###
	;  #   exceptions :						#
	;  #     - data miss alignement                 		#
	;  ###--------------------------------------------------------###

val1    	.equ	0x3C    		; arithmetic overflow

val             .equ    0x10

		.org	0x80000080
		.start	it_handler

	;  ###--------------------------------------------------------###
	;  #   interrupt and exception handler				#
	;  ###--------------------------------------------------------###

it_handler:

		sw	r29, 0(r30) 
		sw	r28, 4(r30) 

		addiu	r28,r0,val1
		mfc0	r29,cause 
		nop
		and	r29, r29, r28		; data address violation ?
                addiu   r27,r0,val
		bne	r29,r27, other_causes
		nop

		lw	r29, 0 (r30)
		lw	r28, 4 (r30)

	;  ###--------------------------------------------------------###
	;  #   restore return address before returning (from EXCEPTION)	#
	;  # to the user program (address must be saved by the user	#
	;  # prior to the EXCEPTION in epc)				#
	;  ###--------------------------------------------------------###

restore_return_adr:
		mfc0    r31,epc
		nop
                addiu   r31,r31,4
		j	return
		nop

other_causes:	j	other_causes
		nop

	;  ###--------------------------------------------------------###
	;  #   return to the interrupted program			#
	;  ###--------------------------------------------------------###
                .org    0x800000d0
return:
		rfe
                jr      r31

		.end
