// fichero 53954 -- macros y constantes
#define LIMITE_53954 54054
#define FACTOR_53954 5

int aplicar_limite53954(int valor) {
    if (valor > LIMITE_53954) return LIMITE_53954;
    return valor * FACTOR_53954;
}
