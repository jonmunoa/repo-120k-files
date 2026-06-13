// fichero 12778 -- macros y constantes
#define LIMITE_12778 12878
#define FACTOR_12778 4

int aplicar_limite12778(int valor) {
    if (valor > LIMITE_12778) return LIMITE_12778;
    return valor * FACTOR_12778;
}
