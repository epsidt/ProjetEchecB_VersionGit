#include "Echiquier.h"

Echiquier::Echiquier()
{
	Case *_tableau[8][8];

	// Cr�ation de toutes les positions :
	Position *position00(0);
	position00 = new Position(0, 0);
	Position *position01(0);
	position01 = new Position(0, 1);
	Position *position02(0);
	position02 = new Position(0, 2);
	Position *position03(0);
	position03 = new Position(0, 3);
	Position *position04(0);
	position04 = new Position(0, 4);
	Position *position05(0);
	position05 = new Position(0, 5);
	Position *position06(0);
	position06 = new Position(0, 6);
	Position *position07(0);
	position07 = new Position(0, 7);
	Position *position10(0);
	position10 = new Position(1, 0);
	Position *position11(0);
	position11 = new Position(1, 1);
	Position *position12(0);
	position12 = new Position(1, 2);
	Position *position13(0);
	position13 = new Position(1, 3);
	Position *position14(0);
	position14 = new Position(1, 4);
	Position *position15(0);
	position15 = new Position(1, 5);
	Position *position16(0);
	position16 = new Position(1, 6);
	Position *position17(0);
	position17 = new Position(1, 7);
	Position *position20(0);
	position20 = new Position(2, 0);
	Position *position21(0);
	position21 = new Position(2, 1);
	Position *position22(0);
	position22 = new Position(2, 2);
	Position *position23(0);
	position23 = new Position(2, 3);
	Position *position24(0);
	position24 = new Position(2, 4);
	Position *position25(0);
	position25 = new Position(2, 5);
	Position *position26(0);
	position26 = new Position(2, 6);
	Position *position27(0);
	position27 = new Position(2, 7);
	Position *position30(0);
	position30 = new Position(3, 0);
	Position *position31(0);
	position31 = new Position(3, 1);
	Position *position32(0);
	position32 = new Position(3, 2);
	Position *position33(0);
	position33 = new Position(3, 3);
	Position *position34(0);
	position34 = new Position(3, 4);
	Position *position35(0);
	position35 = new Position(3, 5);
	Position *position36(0);
	position36 = new Position(3, 6);
	Position *position37(0);
	position37 = new Position(3, 7);
	Position *position40(0);
	position40 = new Position(4, 0);
	Position *position41(0);
	position41 = new Position(4, 1);
	Position *position42(0);
	position42 = new Position(4, 2);
	Position *position43(0);
	position43 = new Position(4, 3);
	Position *position44(0);
	position44 = new Position(4, 4);
	Position *position45(0);
	position45 = new Position(4, 5);
	Position *position46(0);
	position46 = new Position(4, 6);
	Position *position47(0);
	position47 = new Position(4, 7);
	Position *position50(0);
	position50 = new Position(5, 0);
	Position *position51(0);
	position51 = new Position(5, 1);
	Position *position52(0);
	position52 = new Position(5, 2);
	Position *position53(0);
	position53 = new Position(5, 3);
	Position *position54(0);
	position54 = new Position(5, 4);
	Position *position55(0);
	position55 = new Position(5, 5);
	Position *position56(0);
	position56 = new Position(5, 6);
	Position *position57(0);
	position57 = new Position(5, 7);
	Position *position60(0);
	position60 = new Position(6, 0);
	Position *position61(0);
	position61 = new Position(6, 1);
	Position *position62(0);
	position62 = new Position(6, 2);
	Position *position63(0);
	position63 = new Position(6, 3);
	Position *position64(0);
	position64 = new Position(6, 4);
	Position *position65(0);
	position65 = new Position(6, 5);
	Position *position66(0);
	position66 = new Position(6, 6);
	Position *position67(0);
	position67 = new Position(6, 7);
	Position *position70(0);
	position70 = new Position(7, 0);
	Position *position71(0);
	position71 = new Position(7, 1);
	Position *position72(0);
	position72 = new Position(7, 2);
	Position *position73(0);
	position73 = new Position(7, 3);
	Position *position74(0);
	position74 = new Position(7, 4);
	Position *position75(0);
	position75 = new Position(7, 5);
	Position *position76(0);
	position76 = new Position(7, 6);
	Position *position77(0);
	position77 = new Position(7, 7);

	// Cr�ation des pi�ces blanches :
	Pion *pionB1(0);
	pionB1 = new Pion(1);
	Pion *pionB2(0);
	pionB2 = new Pion(1);
	Pion *pionB3(0);
	pionB3 = new Pion(1);
	Pion *pionB4(0);
	pionB4 = new Pion(1);
	Pion *pionB5(0);
	pionB5 = new Pion(1);
	Pion *pionB6(0);
	pionB6 = new Pion(1);
	Pion *pionB7(0);
	pionB7 = new Pion(1);
	Pion *pionB8(0);
	pionB8 = new Pion(1);
	Tour *tourB1(0);
	tourB1 = new Tour(1);
	Tour *tourB2(0);
	tourB2 = new Tour(1);
	Cavalier *cavalierB1(0);
	cavalierB1 = new Cavalier(1);
	Cavalier *cavalierB2(0);
	cavalierB2 = new Cavalier(1);
	Fou *fouB1(0);
	fouB1 = new Fou(1);
	Fou *fouB2(0);
	fouB2 = new Fou(1);
	Reine *reineB(0);
	reineB = new Reine(1);
	Roi *roiB(0);
	roiB = new Roi(1);

	// Cr�ation des pi�ces noires :
	Pion *pionN1(0);
	pionN1 = new Pion(2);
	Pion *pionN2(0);
	pionN2 = new Pion(2);
	Pion *pionN3(0);
	pionN3 = new Pion(2);
	Pion *pionN4(0);
	pionN4 = new Pion(2);
	Pion *pionN5(0);
	pionN5 = new Pion(2);
	Pion *pionN6(0);
	pionN6 = new Pion(2);
	Pion *pionN7(0);
	pionN7 = new Pion(2);
	Pion *pionN8(0);
	pionN8 = new Pion(2);
	Tour *tourN1(0);
	tourN1 = new Tour(2);
	Tour *tourN2(0);
	tourN2 = new Tour(2);
	Cavalier *cavalierN1(0);
	cavalierN1 = new Cavalier(2);
	Cavalier *cavalierN2(0);
	cavalierN2 = new Cavalier(2);
	Fou *fouN1(0);
	fouN1 = new Fou(2);
	Fou *fouN2(0);
	fouN2 = new Fou(2);
	Reine *reineN(0);
	reineN = new Reine(2);
	Roi *roiN(0);
	roiN = new Roi(2);

	// Cr�ation des cases :
	Case *case00(0);
	case00 = new Case(tourB1, position00, 2);
	Case *case01(0);
	case01 = new Case(pionB1, position01, 1);
	Case *case02(0);
	case02 = new Case(position02, 2);
	Case *case03(0);
	case03 = new Case(position03, 1);
	Case *case04(0);
	case04 = new Case(position04, 2);
	Case *case05(0);
	case05 = new Case(position05, 1);
	Case *case06(0);
	case06 = new Case(pionN1, position06, 2);
	Case *case07(0);
	case07 = new Case(tourN1, position07, 1);
	Case *case10(0);
	case10 = new Case(cavalierB1, position10, 2);
	Case *case11(0);
	case11 = new Case(pionB2, position11, 1);
	Case *case12(0);
	case12 = new Case(position12, 2);
	Case *case13(0);
	case13 = new Case(position13, 1);
	Case *case14(0);
	case14 = new Case(position14, 2);
	Case *case15(0);
	case15 = new Case(position15, 1);
	Case *case16(0);
	case16 = new Case(pionN2, position16, 2);
	Case *case17(0);
	case17 = new Case(cavalierN1, position17, 1);
	Case *case20(0);
	case20 = new Case(fouB1, position20, 2);
	Case *case21(0);
	case21 = new Case(pionB3, position21, 1);
	Case *case22(0);
	case22 = new Case(position22, 2);
	Case *case23(0);
	case23 = new Case(position23, 1);
	Case *case24(0);
	case24 = new Case(position24, 2);
	Case *case25(0);
	case25 = new Case(position25, 1);
	Case *case26(0);
	case26 = new Case(pionN3, position26, 2);
	Case*case27(0);
	case27 = new Case(fouN1, position27, 1);
	Case *case30(0);
	case30 = new Case(reineB, position30, 2);
	Case *case31(0);
	case31 = new Case(pionB4, position31, 1);
	Case *case32(0);
	case32 = new Case(position32, 2);
	Case *case33(0);
	case33 = new Case(position33, 1);
	Case *case34(0);
	case34 = new Case(position34, 2);
	Case *case35(0);
	case35 = new Case(position35, 1);
	Case *case36(0);
	case36 = new Case(pionN4, position36, 2);
	Case *case37(0);
	case37 = new Case(reineN, position37, 1);
	Case *case40(0);
	case40 = new Case(roiB, position40, 2);
	Case *case41(0);
	case41 = new Case(pionB5, position41, 1);
	Case *case42(0);
	case42 = new Case(position42, 2);
	Case *case43(0);
	case43 = new Case(position43, 1);
	Case *case44(0);
	case44 = new Case(position44, 2);
	Case *case45(0);
	case45 = new Case(position45, 1);
	Case *case46(0);
	case46 = new Case(pionN5, position46, 2);
	Case *case47(0);
	case47 = new Case(roiN, position47, 1);
	Case *case50(0);
	case50 = new Case(fouB2, position50, 2);
	Case *case51(0);
	case51 = new Case(pionB6, position51, 1);
	Case *case52(0);
	case52 = new Case(position52, 2);
	Case *case53(0);
	case53 = new Case(position53, 1);
	Case *case54(0);
	case54 = new Case(position54, 2);
	Case *case55(0);
	case55 = new Case(position55, 1);
	Case *case56(0);
	case56 = new Case(pionN6, position56, 2);
	Case *case57(0);
	case57 = new Case(fouN2, position57, 1);
	Case *case60(0);
	case60 = new Case(cavalierB2, position60, 2);
	Case *case61(0);
	case61 = new Case(pionB7, position61, 1);
	Case *case62(0);
	case62 = new Case(position62, 2);
	Case *case63(0);
	case63 = new Case(position63, 1);
	Case *case64(0);
	case64 = new Case(position64, 2);
	Case *case65(0);
	case65 = new Case(position65, 1);
	Case *case66(0);
	case66 = new Case(pionN7, position66, 2);
	Case *case67(0);
	case67 = new Case(cavalierN2, position67, 1);
	Case *case70(0);
	case70 = new Case(tourB2, position70, 2);
	Case *case71(0);
	case71 = new Case(pionB8, position71, 1);
	Case *case72(0);
	case72 = new Case(position72, 2);
	Case *case73(0);
	case73 = new Case(position73, 1);
	Case *case74(0);
	case74 = new Case(position74, 2);
	Case *case75(0);
	case75 = new Case(position75, 1);
	Case *case76(0);
	case76 = new Case(pionN8, position76, 2);
	Case *case77(0);
	case77 = new Case(tourN2, position77, 1);
}