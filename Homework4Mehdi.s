	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 3
	.globl	_menu                           ## -- Begin function menu
	.p2align	4, 0x90
_menu:                                  ## @menu
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str(%rip), %rdi
	callq	_puts
	leaq	L_.str.1(%rip), %rdi
	callq	_puts
	leaq	L_.str.2(%rip), %rdi
	callq	_puts
	leaq	L_.str.3(%rip), %rdi
	callq	_puts
	leaq	L_.str.4(%rip), %rdi
	callq	_puts
	leaq	L_.str.5(%rip), %rdi
	callq	_puts
	leaq	L_.str.6(%rip), %rdi
	leaq	-4(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2                               ## -- Begin function calc_all
LCPI1_0:
	.long	0x42200000                      ## float 40
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3
LCPI1_1:
	.quad	0x3ff8000000000000              ## double 1.5
LCPI1_2:
	.quad	0x3fc999999999999a              ## double 0.20000000000000001
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_calc_all
	.p2align	4, 0x90
_calc_all:                              ## @calc_all
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movss	20(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	movq	-8(%rbp), %rax
	mulss	24(%rax), %xmm0
	movss	%xmm0, -12(%rbp)
	movq	-8(%rbp), %rax
	movss	24(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	movss	LCPI1_0(%rip), %xmm1            ## xmm1 = mem[0],zero,zero,zero
	ucomiss	%xmm1, %xmm0
	jbe	LBB1_2
## %bb.1:
	movq	-8(%rbp), %rax
	movss	20(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movsd	LCPI1_1(%rip), %xmm1            ## xmm1 = mem[0],zero
	mulsd	%xmm1, %xmm0
	movq	-8(%rbp), %rax
	movss	24(%rax), %xmm1                 ## xmm1 = mem[0],zero,zero,zero
	movss	LCPI1_0(%rip), %xmm2            ## xmm2 = mem[0],zero,zero,zero
	subss	%xmm2, %xmm1
	cvtss2sd	%xmm1, %xmm1
	mulsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movq	-8(%rbp), %rax
	movss	%xmm0, 40(%rax)
	movq	-8(%rbp), %rax
	movss	40(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	addss	-12(%rbp), %xmm0
	movss	%xmm0, -12(%rbp)
	movq	-8(%rbp), %rax
	movss	24(%rax), %xmm1                 ## xmm1 = mem[0],zero,zero,zero
	movss	LCPI1_0(%rip), %xmm0            ## xmm0 = mem[0],zero,zero,zero
	subss	%xmm0, %xmm1
	movq	-8(%rbp), %rax
	mulss	20(%rax), %xmm1
	movss	-12(%rbp), %xmm0                ## xmm0 = mem[0],zero,zero,zero
	subss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
LBB1_2:
	movq	-8(%rbp), %rax
	movss	40(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	xorps	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jbe	LBB1_5
## %bb.3:
	movq	-8(%rbp), %rax
	movss	LCPI1_0(%rip), %xmm0            ## xmm0 = mem[0],zero,zero,zero
	ucomiss	24(%rax), %xmm0
	jbe	LBB1_5
## %bb.4:
	movq	-8(%rbp), %rax
	xorps	%xmm0, %xmm0
	movss	%xmm0, 40(%rax)
LBB1_5:
	movss	-12(%rbp), %xmm0                ## xmm0 = mem[0],zero,zero,zero
	movq	-8(%rbp), %rax
	movss	%xmm0, 36(%rax)
	movq	-8(%rbp), %rax
	movss	36(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movsd	LCPI1_2(%rip), %xmm1            ## xmm1 = mem[0],zero
	mulsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movq	-8(%rbp), %rax
	movss	%xmm0, 28(%rax)
	movq	-8(%rbp), %rax
	movss	36(%rax), %xmm0                 ## xmm0 = mem[0],zero,zero,zero
	movq	-8(%rbp), %rax
	subss	28(%rax), %xmm0
	movq	-8(%rbp), %rax
	movss	%xmm0, 32(%rax)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_add_employee                   ## -- Begin function add_employee
	.p2align	4, 0x90
_add_employee:                          ## @add_employee
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	cmpl	$5, (%rax)
	jne	LBB2_2
## %bb.1:
	leaq	L_.str.7(%rip), %rdi
	movl	$5, %esi
	movb	$0, %al
	callq	_printf
	jmp	LBB2_3
LBB2_2:
	leaq	L_.str.8(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rax
	movslq	(%rax), %rax
	imulq	$44, %rax, %rax
	addq	%rax, %rsi
	leaq	L_.str.9(%rip), %rdi
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.10(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rax
	movslq	(%rax), %rax
	imulq	$44, %rax, %rax
	addq	%rax, %rsi
	addq	$24, %rsi
	leaq	L_.str.11(%rip), %rdi
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.12(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rsi
	movq	-8(%rbp), %rax
	movslq	(%rax), %rax
	imulq	$44, %rax, %rax
	addq	%rax, %rsi
	addq	$20, %rsi
	leaq	L_.str.11(%rip), %rdi
	movb	$0, %al
	callq	_scanf
	movq	-16(%rbp), %rdi
	movq	-8(%rbp), %rax
	movslq	(%rax), %rax
	imulq	$44, %rax, %rax
	addq	%rax, %rdi
	callq	_calc_all
	movq	-8(%rbp), %rax
	movl	(%rax), %ecx
	addl	$1, %ecx
	movl	%ecx, (%rax)
LBB2_3:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_get_index                      ## -- Begin function get_index
	.p2align	4, 0x90
_get_index:                             ## @get_index
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
LBB3_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB3_2 Depth 2
	leaq	L_.str.13(%rip), %rdi
	callq	_puts
	movl	$0, -24(%rbp)
LBB3_2:                                 ##   Parent Loop BB3_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-24(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jge	LBB3_5
## %bb.3:                               ##   in Loop: Header=BB3_2 Depth=2
	movl	-24(%rbp), %esi
	addl	$1, %esi
	movq	-16(%rbp), %rdx
	movslq	-24(%rbp), %rax
	imulq	$44, %rax, %rax
	addq	%rax, %rdx
	leaq	L_.str.14(%rip), %rdi
	movb	$0, %al
	callq	_printf
## %bb.4:                               ##   in Loop: Header=BB3_2 Depth=2
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	jmp	LBB3_2
LBB3_5:                                 ##   in Loop: Header=BB3_1 Depth=1
	leaq	L_.str.6(%rip), %rdi
	leaq	-20(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
## %bb.6:                               ##   in Loop: Header=BB3_1 Depth=1
	movl	-20(%rbp), %ecx
	movl	-4(%rbp), %edx
	addl	$1, %edx
	movb	$1, %al
	cmpl	%edx, %ecx
	movb	%al, -25(%rbp)                  ## 1-byte Spill
	jg	LBB3_8
## %bb.7:                               ##   in Loop: Header=BB3_1 Depth=1
	cmpl	$1, -20(%rbp)
	setl	%al
	movb	%al, -25(%rbp)                  ## 1-byte Spill
LBB3_8:                                 ##   in Loop: Header=BB3_1 Depth=1
	movb	-25(%rbp), %al                  ## 1-byte Reload
	testb	$1, %al
	jne	LBB3_1
## %bb.9:
	movl	-20(%rbp), %eax
	addl	$-1, %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_edit_employee                  ## -- Begin function edit_employee
	.p2align	4, 0x90
_edit_employee:                         ## @edit_employee
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-4(%rbp), %edi
	movq	-16(%rbp), %rsi
	callq	_get_index
	movl	%eax, -20(%rbp)
	movq	-16(%rbp), %rsi
	leaq	-20(%rbp), %rdi
	callq	_add_employee
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_print_an_employee              ## -- Begin function print_an_employee
	.p2align	4, 0x90
_print_an_employee:                     ## @print_an_employee
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	%edi, -60(%rbp)
	movq	%rsi, -72(%rbp)
	movq	-72(%rbp), %rsi
	movslq	-60(%rbp), %rax
	imulq	$44, %rax, %rax
	addq	%rax, %rsi
	leaq	-56(%rbp), %rdi
	movl	$44, %edx
	callq	_memcpy
	movl	-60(%rbp), %esi
	addl	$1, %esi
	leaq	-56(%rbp), %rdx
	movss	-36(%rbp), %xmm0                ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movss	-32(%rbp), %xmm1                ## xmm1 = mem[0],zero,zero,zero
	cvtss2sd	%xmm1, %xmm1
	leaq	L_.str.15(%rip), %rdi
	movb	$2, %al
	callq	_printf
	movss	-28(%rbp), %xmm0                ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movss	-24(%rbp), %xmm1                ## xmm1 = mem[0],zero,zero,zero
	cvtss2sd	%xmm1, %xmm1
	movss	-20(%rbp), %xmm2                ## xmm2 = mem[0],zero,zero,zero
	cvtss2sd	%xmm2, %xmm2
	movss	-16(%rbp), %xmm3                ## xmm3 = mem[0],zero,zero,zero
	cvtss2sd	%xmm3, %xmm3
	leaq	L_.str.16(%rip), %rdi
	movb	$4, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB5_2
## %bb.1:
	addq	$80, %rsp
	popq	%rbp
	retq
LBB5_2:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.globl	_print_employee                 ## -- Begin function print_employee
	.p2align	4, 0x90
_print_employee:                        ## @print_employee
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-4(%rbp), %edi
	movq	-16(%rbp), %rsi
	callq	_get_index
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %edi
	movq	-16(%rbp), %rsi
	callq	_print_an_employee
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_print_employees                ## -- Begin function print_employees
	.p2align	4, 0x90
_print_employees:                       ## @print_employees
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, -20(%rbp)
LBB7_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-20(%rbp), %eax
	cmpl	-4(%rbp), %eax
	jge	LBB7_4
## %bb.2:                               ##   in Loop: Header=BB7_1 Depth=1
	movl	-20(%rbp), %edi
	movq	-16(%rbp), %rsi
	callq	_print_an_employee
	leaq	L_.str.17(%rip), %rdi
	movb	$0, %al
	callq	_printf
## %bb.3:                               ##   in Loop: Header=BB7_1 Depth=1
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	jmp	LBB7_1
LBB7_4:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$272, %rsp                      ## imm = 0x110
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -244(%rbp)
	movl	$0, -248(%rbp)
LBB8_1:                                 ## =>This Inner Loop Header: Depth=1
	callq	_menu
	movl	%eax, -252(%rbp)
	movl	-252(%rbp), %eax
	addl	$-1, %eax
	movl	%eax, %ecx
	movq	%rcx, -264(%rbp)                ## 8-byte Spill
	subl	$4, %eax
	ja	LBB8_10
## %bb.13:                              ##   in Loop: Header=BB8_1 Depth=1
	movq	-264(%rbp), %rax                ## 8-byte Reload
	leaq	LJTI8_0(%rip), %rcx
	movslq	(%rcx,%rax,4), %rax
	addq	%rcx, %rax
	jmpq	*%rax
LBB8_2:                                 ##   in Loop: Header=BB8_1 Depth=1
	leaq	-240(%rbp), %rsi
	leaq	-248(%rbp), %rdi
	callq	_add_employee
	jmp	LBB8_11
LBB8_3:                                 ##   in Loop: Header=BB8_1 Depth=1
	cmpl	$0, -248(%rbp)
	je	LBB8_5
## %bb.4:                               ##   in Loop: Header=BB8_1 Depth=1
	movl	-248(%rbp), %edi
	leaq	-240(%rbp), %rsi
	callq	_edit_employee
LBB8_5:                                 ##   in Loop: Header=BB8_1 Depth=1
	jmp	LBB8_11
LBB8_6:                                 ##   in Loop: Header=BB8_1 Depth=1
	movl	-248(%rbp), %edi
	leaq	-240(%rbp), %rsi
	callq	_print_employee
	jmp	LBB8_11
LBB8_7:                                 ##   in Loop: Header=BB8_1 Depth=1
	movl	-248(%rbp), %edi
	leaq	-240(%rbp), %rsi
	callq	_print_employees
	jmp	LBB8_11
LBB8_8:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB8_12
## %bb.9:
	movl	$4294967295, %eax               ## imm = 0xFFFFFFFF
	addq	$272, %rsp                      ## imm = 0x110
	popq	%rbp
	retq
LBB8_10:                                ##   in Loop: Header=BB8_1 Depth=1
	jmp	LBB8_11
LBB8_11:                                ##   in Loop: Header=BB8_1 Depth=1
	jmp	LBB8_1
LBB8_12:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
	.p2align	2, 0x90
	.data_region jt32
.set L8_0_set_2, LBB8_2-LJTI8_0
.set L8_0_set_3, LBB8_3-LJTI8_0
.set L8_0_set_6, LBB8_6-LJTI8_0
.set L8_0_set_7, LBB8_7-LJTI8_0
.set L8_0_set_8, LBB8_8-LJTI8_0
LJTI8_0:
	.long	L8_0_set_2
	.long	L8_0_set_3
	.long	L8_0_set_6
	.long	L8_0_set_7
	.long	L8_0_set_8
	.end_data_region
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\nMain Menu"

L_.str.1:                               ## @.str.1
	.asciz	"1. Add Employee"

L_.str.2:                               ## @.str.2
	.asciz	"2. Edit Employee"

L_.str.3:                               ## @.str.3
	.asciz	"3. Print Employee"

L_.str.4:                               ## @.str.4
	.asciz	"4. Print All Employes"

L_.str.5:                               ## @.str.5
	.asciz	"5. Quit"

L_.str.6:                               ## @.str.6
	.asciz	"%d"

L_.str.7:                               ## @.str.7
	.asciz	"Cannot create more than %d employees\n"

L_.str.8:                               ## @.str.8
	.asciz	"Name: "

L_.str.9:                               ## @.str.9
	.asciz	"%s"

L_.str.10:                              ## @.str.10
	.asciz	"Hours worked: "

L_.str.11:                              ## @.str.11
	.asciz	"%f"

L_.str.12:                              ## @.str.12
	.asciz	"Hourly rate: "

L_.str.13:                              ## @.str.13
	.asciz	"Choose an employee:"

L_.str.14:                              ## @.str.14
	.asciz	"%d. %s\n"

L_.str.15:                              ## @.str.15
	.asciz	"Employee name (number %d): %s\n\tRate: %.2f $/hr\n\tHours: %.2f\n"

L_.str.16:                              ## @.str.16
	.asciz	"\tTax: $%.2f\n\tNet: $%.2f\n\tGross: $%.2f\n\tOverwork: $%.2f\n"

L_.str.17:                              ## @.str.17
	.asciz	"\n"

.subsections_via_symbols
