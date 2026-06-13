// fichero 32854 -- macros y constantes
#define LIMITE_32854 32954
#define FACTOR_32854 5

int aplicar_limite32854(int valor) {
    if (valor > LIMITE_32854) return LIMITE_32854;
    return valor * FACTOR_32854;
}
