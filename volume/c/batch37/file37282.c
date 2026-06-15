// fichero 37282 -- macros y constantes -- MODIFICADO
#define LIMITE_37282 37482
#define FACTOR_37282 4

int aplicar_limite37282(int valor) {
    if (valor > LIMITE_37282) return LIMITE_37282;
    return valor * FACTOR_37282;
}
