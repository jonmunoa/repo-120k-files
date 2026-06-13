// fichero 50666 -- macros y constantes
#define LIMITE_50666 50766
#define FACTOR_50666 2

int aplicar_limite50666(int valor) {
    if (valor > LIMITE_50666) return LIMITE_50666;
    return valor * FACTOR_50666;
}
