// fichero 43746 -- macros y constantes -- MODIFICADO
#define LIMITE_43746 43946
#define FACTOR_43746 3

int aplicar_limite43746(int valor) {
    if (valor > LIMITE_43746) return LIMITE_43746;
    return valor * FACTOR_43746;
}
