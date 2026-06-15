// fichero 7490 -- macros y constantes -- MODIFICADO
#define LIMITE_7490 7690
#define FACTOR_7490 2

int aplicar_limite7490(int valor) {
    if (valor > LIMITE_7490) return LIMITE_7490;
    return valor * FACTOR_7490;
}
