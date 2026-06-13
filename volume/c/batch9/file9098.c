// fichero 9098 -- macros y constantes
#define LIMITE_9098 9198
#define FACTOR_9098 4

int aplicar_limite9098(int valor) {
    if (valor > LIMITE_9098) return LIMITE_9098;
    return valor * FACTOR_9098;
}
