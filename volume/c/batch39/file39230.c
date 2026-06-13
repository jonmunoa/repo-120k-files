// fichero 39230 -- macros y constantes
#define LIMITE_39230 39330
#define FACTOR_39230 1

int aplicar_limite39230(int valor) {
    if (valor > LIMITE_39230) return LIMITE_39230;
    return valor * FACTOR_39230;
}
