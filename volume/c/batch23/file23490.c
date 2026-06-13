// fichero 23490 -- macros y constantes
#define LIMITE_23490 23590
#define FACTOR_23490 1

int aplicar_limite23490(int valor) {
    if (valor > LIMITE_23490) return LIMITE_23490;
    return valor * FACTOR_23490;
}
