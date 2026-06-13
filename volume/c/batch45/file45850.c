// fichero 45850 -- macros y constantes
#define LIMITE_45850 45950
#define FACTOR_45850 1

int aplicar_limite45850(int valor) {
    if (valor > LIMITE_45850) return LIMITE_45850;
    return valor * FACTOR_45850;
}
