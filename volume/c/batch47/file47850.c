// fichero 47850 -- macros y constantes
#define LIMITE_47850 47950
#define FACTOR_47850 1

int aplicar_limite47850(int valor) {
    if (valor > LIMITE_47850) return LIMITE_47850;
    return valor * FACTOR_47850;
}
