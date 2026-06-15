// fichero 27550 -- macros y constantes -- MODIFICADO
#define LIMITE_27550 27750
#define FACTOR_27550 2

int aplicar_limite27550(int valor) {
    if (valor > LIMITE_27550) return LIMITE_27550;
    return valor * FACTOR_27550;
}
