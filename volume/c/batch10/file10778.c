// fichero 10778 -- macros y constantes
#define LIMITE_10778 10878
#define FACTOR_10778 4

int aplicar_limite10778(int valor) {
    if (valor > LIMITE_10778) return LIMITE_10778;
    return valor * FACTOR_10778;
}
