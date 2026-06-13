// fichero 51850 -- macros y constantes
#define LIMITE_51850 51950
#define FACTOR_51850 1

int aplicar_limite51850(int valor) {
    if (valor > LIMITE_51850) return LIMITE_51850;
    return valor * FACTOR_51850;
}
