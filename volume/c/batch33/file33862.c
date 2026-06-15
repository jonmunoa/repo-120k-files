// fichero 33862 -- macros y constantes -- MODIFICADO
#define LIMITE_33862 34062
#define FACTOR_33862 4

int aplicar_limite33862(int valor) {
    if (valor > LIMITE_33862) return LIMITE_33862;
    return valor * FACTOR_33862;
}
