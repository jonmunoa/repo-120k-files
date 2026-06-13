// fichero 6058 -- macros y constantes
#define LIMITE_6058 6158
#define FACTOR_6058 4

int aplicar_limite6058(int valor) {
    if (valor > LIMITE_6058) return LIMITE_6058;
    return valor * FACTOR_6058;
}
