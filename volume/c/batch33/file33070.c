// fichero 33070 -- macros y constantes -- MODIFICADO
#define LIMITE_33070 33270
#define FACTOR_33070 2

int aplicar_limite33070(int valor) {
    if (valor > LIMITE_33070) return LIMITE_33070;
    return valor * FACTOR_33070;
}
