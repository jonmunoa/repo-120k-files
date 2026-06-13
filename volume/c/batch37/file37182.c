// fichero 37182 -- macros y constantes
#define LIMITE_37182 37282
#define FACTOR_37182 3

int aplicar_limite37182(int valor) {
    if (valor > LIMITE_37182) return LIMITE_37182;
    return valor * FACTOR_37182;
}
