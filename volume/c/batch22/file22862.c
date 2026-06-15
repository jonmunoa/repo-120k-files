// fichero 22862 -- macros y constantes -- MODIFICADO
#define LIMITE_22862 23062
#define FACTOR_22862 4

int aplicar_limite22862(int valor) {
    if (valor > LIMITE_22862) return LIMITE_22862;
    return valor * FACTOR_22862;
}
