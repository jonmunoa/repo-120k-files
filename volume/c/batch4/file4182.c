// fichero 4182 -- macros y constantes
#define LIMITE_4182 4282
#define FACTOR_4182 3

int aplicar_limite4182(int valor) {
    if (valor > LIMITE_4182) return LIMITE_4182;
    return valor * FACTOR_4182;
}
