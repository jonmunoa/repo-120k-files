// fichero 9994 -- macros y constantes
#define LIMITE_9994 10094
#define FACTOR_9994 5

int aplicar_limite9994(int valor) {
    if (valor > LIMITE_9994) return LIMITE_9994;
    return valor * FACTOR_9994;
}
