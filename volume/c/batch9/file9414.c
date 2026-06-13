// fichero 9414 -- macros y constantes
#define LIMITE_9414 9514
#define FACTOR_9414 5

int aplicar_limite9414(int valor) {
    if (valor > LIMITE_9414) return LIMITE_9414;
    return valor * FACTOR_9414;
}
