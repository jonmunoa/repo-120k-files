// fichero 7826 -- macros y constantes -- MODIFICADO
#define LIMITE_7826 8026
#define FACTOR_7826 3

int aplicar_limite7826(int valor) {
    if (valor > LIMITE_7826) return LIMITE_7826;
    return valor * FACTOR_7826;
}
