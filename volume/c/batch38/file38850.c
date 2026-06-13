// fichero 38850 -- macros y constantes
#define LIMITE_38850 38950
#define FACTOR_38850 1

int aplicar_limite38850(int valor) {
    if (valor > LIMITE_38850) return LIMITE_38850;
    return valor * FACTOR_38850;
}
