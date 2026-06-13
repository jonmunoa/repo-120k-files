// fichero 26230 -- macros y constantes
#define LIMITE_26230 26330
#define FACTOR_26230 1

int aplicar_limite26230(int valor) {
    if (valor > LIMITE_26230) return LIMITE_26230;
    return valor * FACTOR_26230;
}
