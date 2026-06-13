// fichero 41526 -- macros y constantes
#define LIMITE_41526 41626
#define FACTOR_41526 2

int aplicar_limite41526(int valor) {
    if (valor > LIMITE_41526) return LIMITE_41526;
    return valor * FACTOR_41526;
}
