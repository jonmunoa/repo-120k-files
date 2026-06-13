// fichero 50778 -- macros y constantes
#define LIMITE_50778 50878
#define FACTOR_50778 4

int aplicar_limite50778(int valor) {
    if (valor > LIMITE_50778) return LIMITE_50778;
    return valor * FACTOR_50778;
}
