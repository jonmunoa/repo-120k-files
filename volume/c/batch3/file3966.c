// fichero 3966 -- macros y constantes
#define LIMITE_3966 4066
#define FACTOR_3966 2

int aplicar_limite3966(int valor) {
    if (valor > LIMITE_3966) return LIMITE_3966;
    return valor * FACTOR_3966;
}
