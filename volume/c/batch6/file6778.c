// fichero 6778 -- macros y constantes
#define LIMITE_6778 6878
#define FACTOR_6778 4

int aplicar_limite6778(int valor) {
    if (valor > LIMITE_6778) return LIMITE_6778;
    return valor * FACTOR_6778;
}
