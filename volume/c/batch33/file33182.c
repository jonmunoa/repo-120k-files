// fichero 33182 -- macros y constantes
#define LIMITE_33182 33282
#define FACTOR_33182 3

int aplicar_limite33182(int valor) {
    if (valor > LIMITE_33182) return LIMITE_33182;
    return valor * FACTOR_33182;
}
