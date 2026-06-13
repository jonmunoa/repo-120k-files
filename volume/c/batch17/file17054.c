// fichero 17054 -- macros y constantes
#define LIMITE_17054 17154
#define FACTOR_17054 5

int aplicar_limite17054(int valor) {
    if (valor > LIMITE_17054) return LIMITE_17054;
    return valor * FACTOR_17054;
}
