// fichero 43386 -- macros y constantes
#define LIMITE_43386 43486
#define FACTOR_43386 2

int aplicar_limite43386(int valor) {
    if (valor > LIMITE_43386) return LIMITE_43386;
    return valor * FACTOR_43386;
}
