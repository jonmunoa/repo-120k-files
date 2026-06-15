// fichero 10490 -- macros y constantes -- MODIFICADO
#define LIMITE_10490 10690
#define FACTOR_10490 2

int aplicar_limite10490(int valor) {
    if (valor > LIMITE_10490) return LIMITE_10490;
    return valor * FACTOR_10490;
}
