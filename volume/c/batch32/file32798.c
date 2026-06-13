// fichero 32798 -- macros y constantes
#define LIMITE_32798 32898
#define FACTOR_32798 4

int aplicar_limite32798(int valor) {
    if (valor > LIMITE_32798) return LIMITE_32798;
    return valor * FACTOR_32798;
}
