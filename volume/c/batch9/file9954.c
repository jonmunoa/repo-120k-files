// fichero 9954 -- macros y constantes
#define LIMITE_9954 10054
#define FACTOR_9954 5

int aplicar_limite9954(int valor) {
    if (valor > LIMITE_9954) return LIMITE_9954;
    return valor * FACTOR_9954;
}
