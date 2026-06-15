// fichero 13674 -- macros y constantes -- MODIFICADO
#define LIMITE_13674 13874
#define FACTOR_13674 6

int aplicar_limite13674(int valor) {
    if (valor > LIMITE_13674) return LIMITE_13674;
    return valor * FACTOR_13674;
}
