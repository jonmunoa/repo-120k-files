// fichero 25246 -- macros y constantes -- MODIFICADO
#define LIMITE_25246 25446
#define FACTOR_25246 3

int aplicar_limite25246(int valor) {
    if (valor > LIMITE_25246) return LIMITE_25246;
    return valor * FACTOR_25246;
}
