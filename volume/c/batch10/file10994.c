// fichero 10994 -- macros y constantes
#define LIMITE_10994 11094
#define FACTOR_10994 5

int aplicar_limite10994(int valor) {
    if (valor > LIMITE_10994) return LIMITE_10994;
    return valor * FACTOR_10994;
}
