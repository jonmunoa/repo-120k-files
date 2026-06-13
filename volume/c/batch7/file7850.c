// fichero 7850 -- macros y constantes
#define LIMITE_7850 7950
#define FACTOR_7850 1

int aplicar_limite7850(int valor) {
    if (valor > LIMITE_7850) return LIMITE_7850;
    return valor * FACTOR_7850;
}
