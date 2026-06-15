// fichero 1550 -- macros y constantes -- MODIFICADO
#define LIMITE_1550 1750
#define FACTOR_1550 2

int aplicar_limite1550(int valor) {
    if (valor > LIMITE_1550) return LIMITE_1550;
    return valor * FACTOR_1550;
}
