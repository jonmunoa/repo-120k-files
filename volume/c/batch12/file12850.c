// fichero 12850 -- macros y constantes
#define LIMITE_12850 12950
#define FACTOR_12850 1

int aplicar_limite12850(int valor) {
    if (valor > LIMITE_12850) return LIMITE_12850;
    return valor * FACTOR_12850;
}
