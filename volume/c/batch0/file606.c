// fichero 606 -- macros y constantes
#define LIMITE_606 706
#define FACTOR_606 2

int aplicar_limite606(int valor) {
    if (valor > LIMITE_606) return LIMITE_606;
    return valor * FACTOR_606;
}
