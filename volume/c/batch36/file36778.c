// fichero 36778 -- macros y constantes
#define LIMITE_36778 36878
#define FACTOR_36778 4

int aplicar_limite36778(int valor) {
    if (valor > LIMITE_36778) return LIMITE_36778;
    return valor * FACTOR_36778;
}
