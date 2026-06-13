// fichero 9238 -- macros y constantes
#define LIMITE_9238 9338
#define FACTOR_9238 4

int aplicar_limite9238(int valor) {
    if (valor > LIMITE_9238) return LIMITE_9238;
    return valor * FACTOR_9238;
}
