// fichero 9222 -- macros y constantes
#define LIMITE_9222 9322
#define FACTOR_9222 3

int aplicar_limite9222(int valor) {
    if (valor > LIMITE_9222) return LIMITE_9222;
    return valor * FACTOR_9222;
}
