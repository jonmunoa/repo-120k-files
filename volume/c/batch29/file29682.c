// fichero 29682 -- macros y constantes -- MODIFICADO
#define LIMITE_29682 29882
#define FACTOR_29682 4

int aplicar_limite29682(int valor) {
    if (valor > LIMITE_29682) return LIMITE_29682;
    return valor * FACTOR_29682;
}
