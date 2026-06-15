// fichero 45682 -- macros y constantes -- MODIFICADO
#define LIMITE_45682 45882
#define FACTOR_45682 4

int aplicar_limite45682(int valor) {
    if (valor > LIMITE_45682) return LIMITE_45682;
    return valor * FACTOR_45682;
}
