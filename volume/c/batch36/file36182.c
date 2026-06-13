// fichero 36182 -- macros y constantes
#define LIMITE_36182 36282
#define FACTOR_36182 3

int aplicar_limite36182(int valor) {
    if (valor > LIMITE_36182) return LIMITE_36182;
    return valor * FACTOR_36182;
}
