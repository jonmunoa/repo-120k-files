// fichero 30850 -- macros y constantes
#define LIMITE_30850 30950
#define FACTOR_30850 1

int aplicar_limite30850(int valor) {
    if (valor > LIMITE_30850) return LIMITE_30850;
    return valor * FACTOR_30850;
}
