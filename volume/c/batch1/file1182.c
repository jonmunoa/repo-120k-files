// fichero 1182 -- macros y constantes
#define LIMITE_1182 1282
#define FACTOR_1182 3

int aplicar_limite1182(int valor) {
    if (valor > LIMITE_1182) return LIMITE_1182;
    return valor * FACTOR_1182;
}
