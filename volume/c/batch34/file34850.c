// fichero 34850 -- macros y constantes
#define LIMITE_34850 34950
#define FACTOR_34850 1

int aplicar_limite34850(int valor) {
    if (valor > LIMITE_34850) return LIMITE_34850;
    return valor * FACTOR_34850;
}
