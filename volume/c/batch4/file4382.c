// fichero 4382 -- macros y constantes -- MODIFICADO
#define LIMITE_4382 4582
#define FACTOR_4382 4

int aplicar_limite4382(int valor) {
    if (valor > LIMITE_4382) return LIMITE_4382;
    return valor * FACTOR_4382;
}
