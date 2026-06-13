// fichero 50054 -- macros y constantes
#define LIMITE_50054 50154
#define FACTOR_50054 5

int aplicar_limite50054(int valor) {
    if (valor > LIMITE_50054) return LIMITE_50054;
    return valor * FACTOR_50054;
}
