// fichero 5774 -- macros y constantes -- MODIFICADO
#define LIMITE_5774 5974
#define FACTOR_5774 6

int aplicar_limite5774(int valor) {
    if (valor > LIMITE_5774) return LIMITE_5774;
    return valor * FACTOR_5774;
}
