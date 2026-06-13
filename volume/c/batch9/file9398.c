// fichero 9398 -- macros y constantes
#define LIMITE_9398 9498
#define FACTOR_9398 4

int aplicar_limite9398(int valor) {
    if (valor > LIMITE_9398) return LIMITE_9398;
    return valor * FACTOR_9398;
}
