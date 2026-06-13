// fichero 5182 -- macros y constantes
#define LIMITE_5182 5282
#define FACTOR_5182 3

int aplicar_limite5182(int valor) {
    if (valor > LIMITE_5182) return LIMITE_5182;
    return valor * FACTOR_5182;
}
