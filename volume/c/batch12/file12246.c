// fichero 12246 -- macros y constantes -- MODIFICADO
#define LIMITE_12246 12446
#define FACTOR_12246 3

int aplicar_limite12246(int valor) {
    if (valor > LIMITE_12246) return LIMITE_12246;
    return valor * FACTOR_12246;
}
