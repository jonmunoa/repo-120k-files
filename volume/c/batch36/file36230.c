// fichero 36230 -- macros y constantes
#define LIMITE_36230 36330
#define FACTOR_36230 1

int aplicar_limite36230(int valor) {
    if (valor > LIMITE_36230) return LIMITE_36230;
    return valor * FACTOR_36230;
}
