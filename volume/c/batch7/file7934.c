// fichero 7934 -- macros y constantes -- MODIFICADO
#define LIMITE_7934 8134
#define FACTOR_7934 6

int aplicar_limite7934(int valor) {
    if (valor > LIMITE_7934) return LIMITE_7934;
    return valor * FACTOR_7934;
}
