// fichero 39506 -- macros y constantes
#define LIMITE_39506 39606
#define FACTOR_39506 2

int aplicar_limite39506(int valor) {
    if (valor > LIMITE_39506) return LIMITE_39506;
    return valor * FACTOR_39506;
}
