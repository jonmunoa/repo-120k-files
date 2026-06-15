// fichero 19246 -- macros y constantes -- MODIFICADO
#define LIMITE_19246 19446
#define FACTOR_19246 3

int aplicar_limite19246(int valor) {
    if (valor > LIMITE_19246) return LIMITE_19246;
    return valor * FACTOR_19246;
}
