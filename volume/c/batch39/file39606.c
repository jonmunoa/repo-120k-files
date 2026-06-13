// fichero 39606 -- macros y constantes
#define LIMITE_39606 39706
#define FACTOR_39606 2

int aplicar_limite39606(int valor) {
    if (valor > LIMITE_39606) return LIMITE_39606;
    return valor * FACTOR_39606;
}
