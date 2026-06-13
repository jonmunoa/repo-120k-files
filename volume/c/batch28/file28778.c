// fichero 28778 -- macros y constantes
#define LIMITE_28778 28878
#define FACTOR_28778 4

int aplicar_limite28778(int valor) {
    if (valor > LIMITE_28778) return LIMITE_28778;
    return valor * FACTOR_28778;
}
