// fichero 30182 -- macros y constantes
#define LIMITE_30182 30282
#define FACTOR_30182 3

int aplicar_limite30182(int valor) {
    if (valor > LIMITE_30182) return LIMITE_30182;
    return valor * FACTOR_30182;
}
