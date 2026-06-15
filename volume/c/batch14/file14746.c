// fichero 14746 -- macros y constantes -- MODIFICADO
#define LIMITE_14746 14946
#define FACTOR_14746 3

int aplicar_limite14746(int valor) {
    if (valor > LIMITE_14746) return LIMITE_14746;
    return valor * FACTOR_14746;
}
