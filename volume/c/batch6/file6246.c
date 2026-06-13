// fichero 6246 -- macros y constantes
#define LIMITE_6246 6346
#define FACTOR_6246 2

int aplicar_limite6246(int valor) {
    if (valor > LIMITE_6246) return LIMITE_6246;
    return valor * FACTOR_6246;
}
