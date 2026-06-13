// fichero 18850 -- macros y constantes
#define LIMITE_18850 18950
#define FACTOR_18850 1

int aplicar_limite18850(int valor) {
    if (valor > LIMITE_18850) return LIMITE_18850;
    return valor * FACTOR_18850;
}
