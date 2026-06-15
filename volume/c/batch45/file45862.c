// fichero 45862 -- macros y constantes -- MODIFICADO
#define LIMITE_45862 46062
#define FACTOR_45862 4

int aplicar_limite45862(int valor) {
    if (valor > LIMITE_45862) return LIMITE_45862;
    return valor * FACTOR_45862;
}
