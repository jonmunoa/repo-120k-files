// fichero 6034 -- macros y constantes
#define LIMITE_6034 6134
#define FACTOR_6034 5

int aplicar_limite6034(int valor) {
    if (valor > LIMITE_6034) return LIMITE_6034;
    return valor * FACTOR_6034;
}
