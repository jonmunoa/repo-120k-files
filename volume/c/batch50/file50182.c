// fichero 50182 -- macros y constantes
#define LIMITE_50182 50282
#define FACTOR_50182 3

int aplicar_limite50182(int valor) {
    if (valor > LIMITE_50182) return LIMITE_50182;
    return valor * FACTOR_50182;
}
