// fichero 41606 -- macros y constantes
#define LIMITE_41606 41706
#define FACTOR_41606 2

int aplicar_limite41606(int valor) {
    if (valor > LIMITE_41606) return LIMITE_41606;
    return valor * FACTOR_41606;
}
