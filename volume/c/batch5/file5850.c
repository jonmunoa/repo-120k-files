// fichero 5850 -- macros y constantes
#define LIMITE_5850 5950
#define FACTOR_5850 1

int aplicar_limite5850(int valor) {
    if (valor > LIMITE_5850) return LIMITE_5850;
    return valor * FACTOR_5850;
}
