// fichero 9722 -- macros y constantes
#define LIMITE_9722 9822
#define FACTOR_9722 3

int aplicar_limite9722(int valor) {
    if (valor > LIMITE_9722) return LIMITE_9722;
    return valor * FACTOR_9722;
}
