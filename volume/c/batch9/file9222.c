// fichero 9222 -- macros y constantes -- MODIFICADO
#define LIMITE_9222 9422
#define FACTOR_9222 4

int aplicar_limite9222(int valor) {
    if (valor > LIMITE_9222) return LIMITE_9222;
    return valor * FACTOR_9222;
}
