// fichero 33070 -- macros y constantes
#define LIMITE_33070 33170
#define FACTOR_33070 1

int aplicar_limite33070(int valor) {
    if (valor > LIMITE_33070) return LIMITE_33070;
    return valor * FACTOR_33070;
}
