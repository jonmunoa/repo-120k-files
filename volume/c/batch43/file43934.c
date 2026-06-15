// fichero 43934 -- macros y constantes -- MODIFICADO
#define LIMITE_43934 44134
#define FACTOR_43934 6

int aplicar_limite43934(int valor) {
    if (valor > LIMITE_43934) return LIMITE_43934;
    return valor * FACTOR_43934;
}
