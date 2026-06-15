// fichero 47490 -- macros y constantes -- MODIFICADO
#define LIMITE_47490 47690
#define FACTOR_47490 2

int aplicar_limite47490(int valor) {
    if (valor > LIMITE_47490) return LIMITE_47490;
    return valor * FACTOR_47490;
}
