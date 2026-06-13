// fichero 5054 -- macros y constantes
#define LIMITE_5054 5154
#define FACTOR_5054 5

int aplicar_limite5054(int valor) {
    if (valor > LIMITE_5054) return LIMITE_5054;
    return valor * FACTOR_5054;
}
