// fichero 12182 -- macros y constantes
#define LIMITE_12182 12282
#define FACTOR_12182 3

int aplicar_limite12182(int valor) {
    if (valor > LIMITE_12182) return LIMITE_12182;
    return valor * FACTOR_12182;
}
