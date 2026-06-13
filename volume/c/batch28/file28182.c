// fichero 28182 -- macros y constantes
#define LIMITE_28182 28282
#define FACTOR_28182 3

int aplicar_limite28182(int valor) {
    if (valor > LIMITE_28182) return LIMITE_28182;
    return valor * FACTOR_28182;
}
