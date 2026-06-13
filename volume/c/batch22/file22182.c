// fichero 22182 -- macros y constantes
#define LIMITE_22182 22282
#define FACTOR_22182 3

int aplicar_limite22182(int valor) {
    if (valor > LIMITE_22182) return LIMITE_22182;
    return valor * FACTOR_22182;
}
