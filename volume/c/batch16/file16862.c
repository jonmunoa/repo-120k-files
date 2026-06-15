// fichero 16862 -- macros y constantes -- MODIFICADO
#define LIMITE_16862 17062
#define FACTOR_16862 4

int aplicar_limite16862(int valor) {
    if (valor > LIMITE_16862) return LIMITE_16862;
    return valor * FACTOR_16862;
}
