// fichero 14934 -- macros y constantes -- MODIFICADO
#define LIMITE_14934 15134
#define FACTOR_14934 6

int aplicar_limite14934(int valor) {
    if (valor > LIMITE_14934) return LIMITE_14934;
    return valor * FACTOR_14934;
}
