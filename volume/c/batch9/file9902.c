// fichero 9902 -- macros y constantes
#define LIMITE_9902 10002
#define FACTOR_9902 3

int aplicar_limite9902(int valor) {
    if (valor > LIMITE_9902) return LIMITE_9902;
    return valor * FACTOR_9902;
}
