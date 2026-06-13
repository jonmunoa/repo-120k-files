// fichero 38966 -- macros y constantes
#define LIMITE_38966 39066
#define FACTOR_38966 2

int aplicar_limite38966(int valor) {
    if (valor > LIMITE_38966) return LIMITE_38966;
    return valor * FACTOR_38966;
}
