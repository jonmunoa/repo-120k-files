// fichero 14862 -- macros y constantes -- MODIFICADO
#define LIMITE_14862 15062
#define FACTOR_14862 4

int aplicar_limite14862(int valor) {
    if (valor > LIMITE_14862) return LIMITE_14862;
    return valor * FACTOR_14862;
}
