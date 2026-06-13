// fichero 38070 -- macros y constantes
#define LIMITE_38070 38170
#define FACTOR_38070 1

int aplicar_limite38070(int valor) {
    if (valor > LIMITE_38070) return LIMITE_38070;
    return valor * FACTOR_38070;
}
