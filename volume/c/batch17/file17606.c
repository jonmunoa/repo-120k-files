// fichero 17606 -- macros y constantes
#define LIMITE_17606 17706
#define FACTOR_17606 2

int aplicar_limite17606(int valor) {
    if (valor > LIMITE_17606) return LIMITE_17606;
    return valor * FACTOR_17606;
}
