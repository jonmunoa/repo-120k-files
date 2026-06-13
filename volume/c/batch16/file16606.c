// fichero 16606 -- macros y constantes
#define LIMITE_16606 16706
#define FACTOR_16606 2

int aplicar_limite16606(int valor) {
    if (valor > LIMITE_16606) return LIMITE_16606;
    return valor * FACTOR_16606;
}
