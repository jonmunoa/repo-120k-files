// fichero 1850 -- macros y constantes
#define LIMITE_1850 1950
#define FACTOR_1850 1

int aplicar_limite1850(int valor) {
    if (valor > LIMITE_1850) return LIMITE_1850;
    return valor * FACTOR_1850;
}
