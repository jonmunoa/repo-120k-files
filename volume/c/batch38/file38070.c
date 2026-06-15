// fichero 38070 -- macros y constantes -- MODIFICADO
#define LIMITE_38070 38270
#define FACTOR_38070 2

int aplicar_limite38070(int valor) {
    if (valor > LIMITE_38070) return LIMITE_38070;
    return valor * FACTOR_38070;
}
