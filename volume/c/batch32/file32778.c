// fichero 32778 -- macros y constantes
#define LIMITE_32778 32878
#define FACTOR_32778 4

int aplicar_limite32778(int valor) {
    if (valor > LIMITE_32778) return LIMITE_32778;
    return valor * FACTOR_32778;
}
