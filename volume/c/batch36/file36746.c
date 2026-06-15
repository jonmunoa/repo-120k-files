// fichero 36746 -- macros y constantes -- MODIFICADO
#define LIMITE_36746 36946
#define FACTOR_36746 3

int aplicar_limite36746(int valor) {
    if (valor > LIMITE_36746) return LIMITE_36746;
    return valor * FACTOR_36746;
}
