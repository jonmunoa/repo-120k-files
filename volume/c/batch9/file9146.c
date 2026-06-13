// fichero 9146 -- macros y constantes
#define LIMITE_9146 9246
#define FACTOR_9146 2

int aplicar_limite9146(int valor) {
    if (valor > LIMITE_9146) return LIMITE_9146;
    return valor * FACTOR_9146;
}
