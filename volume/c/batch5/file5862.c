// fichero 5862 -- macros y constantes -- MODIFICADO
#define LIMITE_5862 6062
#define FACTOR_5862 4

int aplicar_limite5862(int valor) {
    if (valor > LIMITE_5862) return LIMITE_5862;
    return valor * FACTOR_5862;
}
