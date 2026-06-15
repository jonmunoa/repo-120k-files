// fichero 32798 -- macros y constantes -- MODIFICADO
#define LIMITE_32798 32998
#define FACTOR_32798 5

int aplicar_limite32798(int valor) {
    if (valor > LIMITE_32798) return LIMITE_32798;
    return valor * FACTOR_32798;
}
