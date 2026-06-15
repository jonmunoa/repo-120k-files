// fichero 16774 -- macros y constantes -- MODIFICADO
#define LIMITE_16774 16974
#define FACTOR_16774 6

int aplicar_limite16774(int valor) {
    if (valor > LIMITE_16774) return LIMITE_16774;
    return valor * FACTOR_16774;
}
