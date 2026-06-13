// fichero 32982 -- macros y constantes
#define LIMITE_32982 33082
#define FACTOR_32982 3

int aplicar_limite32982(int valor) {
    if (valor > LIMITE_32982) return LIMITE_32982;
    return valor * FACTOR_32982;
}
