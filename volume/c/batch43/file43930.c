// fichero 43930 -- macros y constantes
#define LIMITE_43930 44030
#define FACTOR_43930 1

int aplicar_limite43930(int valor) {
    if (valor > LIMITE_43930) return LIMITE_43930;
    return valor * FACTOR_43930;
}
