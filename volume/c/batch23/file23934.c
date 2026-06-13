// fichero 23934 -- macros y constantes
#define LIMITE_23934 24034
#define FACTOR_23934 5

int aplicar_limite23934(int valor) {
    if (valor > LIMITE_23934) return LIMITE_23934;
    return valor * FACTOR_23934;
}
