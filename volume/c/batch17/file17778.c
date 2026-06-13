// fichero 17778 -- macros y constantes
#define LIMITE_17778 17878
#define FACTOR_17778 4

int aplicar_limite17778(int valor) {
    if (valor > LIMITE_17778) return LIMITE_17778;
    return valor * FACTOR_17778;
}
