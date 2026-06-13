// fichero 51966 -- macros y constantes
#define LIMITE_51966 52066
#define FACTOR_51966 2

int aplicar_limite51966(int valor) {
    if (valor > LIMITE_51966) return LIMITE_51966;
    return valor * FACTOR_51966;
}
