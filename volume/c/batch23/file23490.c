// fichero 23490 -- macros y constantes -- MODIFICADO
#define LIMITE_23490 23690
#define FACTOR_23490 2

int aplicar_limite23490(int valor) {
    if (valor > LIMITE_23490) return LIMITE_23490;
    return valor * FACTOR_23490;
}
