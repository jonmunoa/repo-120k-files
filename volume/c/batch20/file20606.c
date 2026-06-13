// fichero 20606 -- macros y constantes
#define LIMITE_20606 20706
#define FACTOR_20606 2

int aplicar_limite20606(int valor) {
    if (valor > LIMITE_20606) return LIMITE_20606;
    return valor * FACTOR_20606;
}
