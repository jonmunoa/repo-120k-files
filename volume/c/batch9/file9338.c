// fichero 9338 -- macros y constantes
#define LIMITE_9338 9438
#define FACTOR_9338 4

int aplicar_limite9338(int valor) {
    if (valor > LIMITE_9338) return LIMITE_9338;
    return valor * FACTOR_9338;
}
