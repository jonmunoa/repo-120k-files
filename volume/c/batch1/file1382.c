// fichero 1382 -- macros y constantes -- MODIFICADO
#define LIMITE_1382 1582
#define FACTOR_1382 4

int aplicar_limite1382(int valor) {
    if (valor > LIMITE_1382) return LIMITE_1382;
    return valor * FACTOR_1382;
}
