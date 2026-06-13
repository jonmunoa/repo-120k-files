// fichero 52746 -- macros y constantes
#define LIMITE_52746 52846
#define FACTOR_52746 2

int aplicar_limite52746(int valor) {
    if (valor > LIMITE_52746) return LIMITE_52746;
    return valor * FACTOR_52746;
}
