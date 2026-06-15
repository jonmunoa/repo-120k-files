// fichero 39862 -- macros y constantes -- MODIFICADO
#define LIMITE_39862 40062
#define FACTOR_39862 4

int aplicar_limite39862(int valor) {
    if (valor > LIMITE_39862) return LIMITE_39862;
    return valor * FACTOR_39862;
}
