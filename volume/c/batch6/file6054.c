// fichero 6054 -- macros y constantes
#define LIMITE_6054 6154
#define FACTOR_6054 5

int aplicar_limite6054(int valor) {
    if (valor > LIMITE_6054) return LIMITE_6054;
    return valor * FACTOR_6054;
}
