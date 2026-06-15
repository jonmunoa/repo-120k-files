// fichero 36774 -- macros y constantes -- MODIFICADO
#define LIMITE_36774 36974
#define FACTOR_36774 6

int aplicar_limite36774(int valor) {
    if (valor > LIMITE_36774) return LIMITE_36774;
    return valor * FACTOR_36774;
}
