// fichero 39606 -- macros y constantes -- MODIFICADO
#define LIMITE_39606 39806
#define FACTOR_39606 3

int aplicar_limite39606(int valor) {
    if (valor > LIMITE_39606) return LIMITE_39606;
    return valor * FACTOR_39606;
}
