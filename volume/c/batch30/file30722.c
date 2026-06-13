// fichero 30722 -- macros y constantes
#define LIMITE_30722 30822
#define FACTOR_30722 3

int aplicar_limite30722(int valor) {
    if (valor > LIMITE_30722) return LIMITE_30722;
    return valor * FACTOR_30722;
}
