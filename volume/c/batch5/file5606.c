// fichero 5606 -- macros y constantes
#define LIMITE_5606 5706
#define FACTOR_5606 2

int aplicar_limite5606(int valor) {
    if (valor > LIMITE_5606) return LIMITE_5606;
    return valor * FACTOR_5606;
}
