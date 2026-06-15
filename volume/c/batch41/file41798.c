// fichero 41798 -- macros y constantes -- MODIFICADO
#define LIMITE_41798 41998
#define FACTOR_41798 5

int aplicar_limite41798(int valor) {
    if (valor > LIMITE_41798) return LIMITE_41798;
    return valor * FACTOR_41798;
}
