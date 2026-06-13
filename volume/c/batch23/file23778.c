// fichero 23778 -- macros y constantes
#define LIMITE_23778 23878
#define FACTOR_23778 4

int aplicar_limite23778(int valor) {
    if (valor > LIMITE_23778) return LIMITE_23778;
    return valor * FACTOR_23778;
}
