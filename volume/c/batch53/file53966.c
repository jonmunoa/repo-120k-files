// fichero 53966 -- macros y constantes
#define LIMITE_53966 54066
#define FACTOR_53966 2

int aplicar_limite53966(int valor) {
    if (valor > LIMITE_53966) return LIMITE_53966;
    return valor * FACTOR_53966;
}
