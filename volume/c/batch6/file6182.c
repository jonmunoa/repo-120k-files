// fichero 6182 -- macros y constantes
#define LIMITE_6182 6282
#define FACTOR_6182 3

int aplicar_limite6182(int valor) {
    if (valor > LIMITE_6182) return LIMITE_6182;
    return valor * FACTOR_6182;
}
