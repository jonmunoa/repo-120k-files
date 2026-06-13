// fichero 23850 -- macros y constantes
#define LIMITE_23850 23950
#define FACTOR_23850 1

int aplicar_limite23850(int valor) {
    if (valor > LIMITE_23850) return LIMITE_23850;
    return valor * FACTOR_23850;
}
