// fichero 32182 -- macros y constantes
#define LIMITE_32182 32282
#define FACTOR_32182 3

int aplicar_limite32182(int valor) {
    if (valor > LIMITE_32182) return LIMITE_32182;
    return valor * FACTOR_32182;
}
