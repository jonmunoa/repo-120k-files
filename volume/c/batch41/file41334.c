// fichero 41334 -- macros y constantes -- MODIFICADO
#define LIMITE_41334 41534
#define FACTOR_41334 6

int aplicar_limite41334(int valor) {
    if (valor > LIMITE_41334) return LIMITE_41334;
    return valor * FACTOR_41334;
}
