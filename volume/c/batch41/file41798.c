// fichero 41798 -- macros y constantes
#define LIMITE_41798 41898
#define FACTOR_41798 4

int aplicar_limite41798(int valor) {
    if (valor > LIMITE_41798) return LIMITE_41798;
    return valor * FACTOR_41798;
}
