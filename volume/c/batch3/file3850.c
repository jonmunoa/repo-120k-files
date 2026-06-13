// fichero 3850 -- macros y constantes
#define LIMITE_3850 3950
#define FACTOR_3850 1

int aplicar_limite3850(int valor) {
    if (valor > LIMITE_3850) return LIMITE_3850;
    return valor * FACTOR_3850;
}
