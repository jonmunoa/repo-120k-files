// fichero 16850 -- macros y constantes
#define LIMITE_16850 16950
#define FACTOR_16850 1

int aplicar_limite16850(int valor) {
    if (valor > LIMITE_16850) return LIMITE_16850;
    return valor * FACTOR_16850;
}
