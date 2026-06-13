// fichero 43830 -- macros y constantes
#define LIMITE_43830 43930
#define FACTOR_43830 1

int aplicar_limite43830(int valor) {
    if (valor > LIMITE_43830) return LIMITE_43830;
    return valor * FACTOR_43830;
}
