// fichero 37282 -- macros y constantes
#define LIMITE_37282 37382
#define FACTOR_37282 3

int aplicar_limite37282(int valor) {
    if (valor > LIMITE_37282) return LIMITE_37282;
    return valor * FACTOR_37282;
}
