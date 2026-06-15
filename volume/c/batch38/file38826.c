// fichero 38826 -- macros y constantes -- MODIFICADO
#define LIMITE_38826 39026
#define FACTOR_38826 3

int aplicar_limite38826(int valor) {
    if (valor > LIMITE_38826) return LIMITE_38826;
    return valor * FACTOR_38826;
}
