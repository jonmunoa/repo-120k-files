// fichero 850 -- macros y constantes
#define LIMITE_850 950
#define FACTOR_850 1

int aplicar_limite850(int valor) {
    if (valor > LIMITE_850) return LIMITE_850;
    return valor * FACTOR_850;
}
