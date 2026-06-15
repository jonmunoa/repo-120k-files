// fichero 45490 -- macros y constantes -- MODIFICADO
#define LIMITE_45490 45690
#define FACTOR_45490 2

int aplicar_limite45490(int valor) {
    if (valor > LIMITE_45490) return LIMITE_45490;
    return valor * FACTOR_45490;
}
