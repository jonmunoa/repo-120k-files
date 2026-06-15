// fichero 36490 -- macros y constantes -- MODIFICADO
#define LIMITE_36490 36690
#define FACTOR_36490 2

int aplicar_limite36490(int valor) {
    if (valor > LIMITE_36490) return LIMITE_36490;
    return valor * FACTOR_36490;
}
