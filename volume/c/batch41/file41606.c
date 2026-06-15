// fichero 41606 -- macros y constantes -- MODIFICADO
#define LIMITE_41606 41806
#define FACTOR_41606 3

int aplicar_limite41606(int valor) {
    if (valor > LIMITE_41606) return LIMITE_41606;
    return valor * FACTOR_41606;
}
