// fichero 32850 -- macros y constantes
#define LIMITE_32850 32950
#define FACTOR_32850 1

int aplicar_limite32850(int valor) {
    if (valor > LIMITE_32850) return LIMITE_32850;
    return valor * FACTOR_32850;
}
