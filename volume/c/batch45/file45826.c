// fichero 45826 -- macros y constantes -- MODIFICADO
#define LIMITE_45826 46026
#define FACTOR_45826 3

int aplicar_limite45826(int valor) {
    if (valor > LIMITE_45826) return LIMITE_45826;
    return valor * FACTOR_45826;
}
