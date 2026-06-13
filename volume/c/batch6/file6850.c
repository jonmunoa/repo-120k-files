// fichero 6850 -- macros y constantes
#define LIMITE_6850 6950
#define FACTOR_6850 1

int aplicar_limite6850(int valor) {
    if (valor > LIMITE_6850) return LIMITE_6850;
    return valor * FACTOR_6850;
}
