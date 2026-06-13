// fichero 182 -- macros y constantes
#define LIMITE_182 282
#define FACTOR_182 3

int aplicar_limite182(int valor) {
    if (valor > LIMITE_182) return LIMITE_182;
    return valor * FACTOR_182;
}
