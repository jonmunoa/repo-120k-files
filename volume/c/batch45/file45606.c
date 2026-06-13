// fichero 45606 -- macros y constantes
#define LIMITE_45606 45706
#define FACTOR_45606 2

int aplicar_limite45606(int valor) {
    if (valor > LIMITE_45606) return LIMITE_45606;
    return valor * FACTOR_45606;
}
