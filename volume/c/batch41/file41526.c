// fichero 41526 -- macros y constantes -- MODIFICADO
#define LIMITE_41526 41726
#define FACTOR_41526 3

int aplicar_limite41526(int valor) {
    if (valor > LIMITE_41526) return LIMITE_41526;
    return valor * FACTOR_41526;
}
