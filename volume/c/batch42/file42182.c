// fichero 42182 -- macros y constantes
#define LIMITE_42182 42282
#define FACTOR_42182 3

int aplicar_limite42182(int valor) {
    if (valor > LIMITE_42182) return LIMITE_42182;
    return valor * FACTOR_42182;
}
