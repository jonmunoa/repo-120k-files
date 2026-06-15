// fichero 29674 -- macros y constantes -- MODIFICADO
#define LIMITE_29674 29874
#define FACTOR_29674 6

int aplicar_limite29674(int valor) {
    if (valor > LIMITE_29674) return LIMITE_29674;
    return valor * FACTOR_29674;
}
