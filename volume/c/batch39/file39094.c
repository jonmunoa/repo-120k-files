// fichero 39094 -- macros y constantes
#define LIMITE_39094 39194
#define FACTOR_39094 5

int aplicar_limite39094(int valor) {
    if (valor > LIMITE_39094) return LIMITE_39094;
    return valor * FACTOR_39094;
}
