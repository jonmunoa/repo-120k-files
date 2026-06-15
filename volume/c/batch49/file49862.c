// fichero 49862 -- macros y constantes -- MODIFICADO
#define LIMITE_49862 50062
#define FACTOR_49862 4

int aplicar_limite49862(int valor) {
    if (valor > LIMITE_49862) return LIMITE_49862;
    return valor * FACTOR_49862;
}
