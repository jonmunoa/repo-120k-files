// fichero 39182 -- macros y constantes
#define LIMITE_39182 39282
#define FACTOR_39182 3

int aplicar_limite39182(int valor) {
    if (valor > LIMITE_39182) return LIMITE_39182;
    return valor * FACTOR_39182;
}
