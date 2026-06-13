// fichero 5778 -- macros y constantes
#define LIMITE_5778 5878
#define FACTOR_5778 4

int aplicar_limite5778(int valor) {
    if (valor > LIMITE_5778) return LIMITE_5778;
    return valor * FACTOR_5778;
}
