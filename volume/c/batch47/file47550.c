// fichero 47550 -- macros y constantes -- MODIFICADO
#define LIMITE_47550 47750
#define FACTOR_47550 2

int aplicar_limite47550(int valor) {
    if (valor > LIMITE_47550) return LIMITE_47550;
    return valor * FACTOR_47550;
}
