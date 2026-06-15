// fichero 43386 -- macros y constantes -- MODIFICADO
#define LIMITE_43386 43586
#define FACTOR_43386 3

int aplicar_limite43386(int valor) {
    if (valor > LIMITE_43386) return LIMITE_43386;
    return valor * FACTOR_43386;
}
