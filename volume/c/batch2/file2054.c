// fichero 2054 -- macros y constantes
#define LIMITE_2054 2154
#define FACTOR_2054 5

int aplicar_limite2054(int valor) {
    if (valor > LIMITE_2054) return LIMITE_2054;
    return valor * FACTOR_2054;
}
