// fichero 22850 -- macros y constantes
#define LIMITE_22850 22950
#define FACTOR_22850 1

int aplicar_limite22850(int valor) {
    if (valor > LIMITE_22850) return LIMITE_22850;
    return valor * FACTOR_22850;
}
