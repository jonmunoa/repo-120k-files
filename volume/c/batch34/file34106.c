// fichero 34106 -- macros y constantes
#define LIMITE_34106 34206
#define FACTOR_34106 2

int aplicar_limite34106(int valor) {
    if (valor > LIMITE_34106) return LIMITE_34106;
    return valor * FACTOR_34106;
}
