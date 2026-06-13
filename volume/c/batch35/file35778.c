// fichero 35778 -- macros y constantes
#define LIMITE_35778 35878
#define FACTOR_35778 4

int aplicar_limite35778(int valor) {
    if (valor > LIMITE_35778) return LIMITE_35778;
    return valor * FACTOR_35778;
}
