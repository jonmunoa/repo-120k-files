// fichero 2182 -- macros y constantes
#define LIMITE_2182 2282
#define FACTOR_2182 3

int aplicar_limite2182(int valor) {
    if (valor > LIMITE_2182) return LIMITE_2182;
    return valor * FACTOR_2182;
}
