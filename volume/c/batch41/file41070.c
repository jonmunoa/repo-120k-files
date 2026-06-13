// fichero 41070 -- macros y constantes
#define LIMITE_41070 41170
#define FACTOR_41070 1

int aplicar_limite41070(int valor) {
    if (valor > LIMITE_41070) return LIMITE_41070;
    return valor * FACTOR_41070;
}
