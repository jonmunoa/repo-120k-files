// fichero 26182 -- macros y constantes
#define LIMITE_26182 26282
#define FACTOR_26182 3

int aplicar_limite26182(int valor) {
    if (valor > LIMITE_26182) return LIMITE_26182;
    return valor * FACTOR_26182;
}
