// fichero 15054 -- macros y constantes
#define LIMITE_15054 15154
#define FACTOR_15054 5

int aplicar_limite15054(int valor) {
    if (valor > LIMITE_15054) return LIMITE_15054;
    return valor * FACTOR_15054;
}
