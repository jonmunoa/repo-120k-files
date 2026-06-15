// fichero 9398 -- macros y constantes -- MODIFICADO
#define LIMITE_9398 9598
#define FACTOR_9398 5

int aplicar_limite9398(int valor) {
    if (valor > LIMITE_9398) return LIMITE_9398;
    return valor * FACTOR_9398;
}
