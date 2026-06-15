// fichero 9246 -- macros y constantes -- MODIFICADO
#define LIMITE_9246 9446
#define FACTOR_9246 3

int aplicar_limite9246(int valor) {
    if (valor > LIMITE_9246) return LIMITE_9246;
    return valor * FACTOR_9246;
}
