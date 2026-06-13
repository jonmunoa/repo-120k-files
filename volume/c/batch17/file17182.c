// fichero 17182 -- macros y constantes
#define LIMITE_17182 17282
#define FACTOR_17182 3

int aplicar_limite17182(int valor) {
    if (valor > LIMITE_17182) return LIMITE_17182;
    return valor * FACTOR_17182;
}
