 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.

#include <sys/vnode.h>
	bsm_audit_mutex = mutex_alloc(ETAP_NO_TRACE);
			kfree((vm_offset_t)rec, (vm_size_t)sizeof(*rec));
int kau_close(struct au_record *rec, struct timespec *ctime, short event)
		kfree((vm_offset_t)tok, sizeof(*tok) + tok->len);
#define KPATH1_VNODE1_TOKENS	\
#define KPATH1_VNODE1_OR_UPATH1_TOKENS	\
		} else {					\
			UPATH1_TOKENS;				\
void
        case A_SETPOLICY:
        case A_SETKMASK:
        case A_SETQCTRL:
        case A_SETUMASK:
        case A_SETSMASK:
        case A_SETCOND:
        case A_SETCLASS:
        case A_SETPMASK:
        case A_SETFSIZE:
			KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		if (ar->ar_arg_cmd == F_GETLK || ar->ar_arg_cmd == F_SETLK ||
			ar->ar_arg_cmd == F_SETLKW) {
			tok = au_to_arg32(2, "cmd", ar->ar_arg_cmd);
			kau_write(rec, tok);
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
	
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		tok = au_to_arg32(1, "addr", (u_int32_t)ar->ar_arg_addr);
		tok = au_to_arg32(2, "len", ar->ar_arg_len);
	case AUE_UMOUNT:
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
	case AUE_OPEN_R:
	case AUE_OPEN_RWC:
	case AUE_OPEN_RWTC:
	case AUE_OPEN_WC:
	case AUE_OPEN_WTC:
		UPATH1_TOKENS;		/* Save the user space path */
		KPATH1_VNODE1_TOKENS;	/* Audit the kernel path as well */
		tok = au_to_arg32(3, "addr", (u_int32_t)ar->ar_arg_addr);
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
				tok = au_to_arg32(1, "setgroups", 							ar->ar_arg_groups.gidset[ctr]);
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
		KPATH1_VNODE1_OR_UPATH1_TOKENS;
bsm_rec_verify(void *rec)