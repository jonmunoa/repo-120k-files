// fichero 35182 -- macros y constantes
#define LIMITE_35182 35282
#define FACTOR_35182 3

int aplicar_limite35182(int valor) {
    if (valor > LIMITE_35182) return LIMITE_35182;
    return valor * FACTOR_35182;
}
