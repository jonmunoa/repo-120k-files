// fichero 40850 -- macros y constantes
#define LIMITE_40850 40950
#define FACTOR_40850 1

int aplicar_limite40850(int valor) {
    if (valor > LIMITE_40850) return LIMITE_40850;
    return valor * FACTOR_40850;
}
