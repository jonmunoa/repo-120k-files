// fichero 50850 -- macros y constantes
#define LIMITE_50850 50950
#define FACTOR_50850 1

int aplicar_limite50850(int valor) {
    if (valor > LIMITE_50850) return LIMITE_50850;
    return valor * FACTOR_50850;
}
