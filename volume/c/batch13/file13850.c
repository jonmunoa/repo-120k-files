// fichero 13850 -- macros y constantes
#define LIMITE_13850 13950
#define FACTOR_13850 1

int aplicar_limite13850(int valor) {
    if (valor > LIMITE_13850) return LIMITE_13850;
    return valor * FACTOR_13850;
}
