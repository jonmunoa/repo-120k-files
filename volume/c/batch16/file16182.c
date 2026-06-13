// fichero 16182 -- macros y constantes
#define LIMITE_16182 16282
#define FACTOR_16182 3

int aplicar_limite16182(int valor) {
    if (valor > LIMITE_16182) return LIMITE_16182;
    return valor * FACTOR_16182;
}
