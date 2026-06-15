// fichero 41774 -- macros y constantes -- MODIFICADO
#define LIMITE_41774 41974
#define FACTOR_41774 6

int aplicar_limite41774(int valor) {
    if (valor > LIMITE_41774) return LIMITE_41774;
    return valor * FACTOR_41774;
}
