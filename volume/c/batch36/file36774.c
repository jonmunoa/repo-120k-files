// fichero 36774 -- macros y constantes
#define LIMITE_36774 36874
#define FACTOR_36774 5

int aplicar_limite36774(int valor) {
    if (valor > LIMITE_36774) return LIMITE_36774;
    return valor * FACTOR_36774;
}
