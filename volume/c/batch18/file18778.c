// fichero 18778 -- macros y constantes
#define LIMITE_18778 18878
#define FACTOR_18778 4

int aplicar_limite18778(int valor) {
    if (valor > LIMITE_18778) return LIMITE_18778;
    return valor * FACTOR_18778;
}
