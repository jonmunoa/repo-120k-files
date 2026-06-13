// fichero 3182 -- macros y constantes
#define LIMITE_3182 3282
#define FACTOR_3182 3

int aplicar_limite3182(int valor) {
    if (valor > LIMITE_3182) return LIMITE_3182;
    return valor * FACTOR_3182;
}
