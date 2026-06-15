// fichero 13746 -- macros y constantes -- MODIFICADO
#define LIMITE_13746 13946
#define FACTOR_13746 3

int aplicar_limite13746(int valor) {
    if (valor > LIMITE_13746) return LIMITE_13746;
    return valor * FACTOR_13746;
}
