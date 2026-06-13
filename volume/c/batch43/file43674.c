// fichero 43674 -- macros y constantes
#define LIMITE_43674 43774
#define FACTOR_43674 5

int aplicar_limite43674(int valor) {
    if (valor > LIMITE_43674) return LIMITE_43674;
    return valor * FACTOR_43674;
}
