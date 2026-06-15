// fichero 6862 -- macros y constantes -- MODIFICADO
#define LIMITE_6862 7062
#define FACTOR_6862 4

int aplicar_limite6862(int valor) {
    if (valor > LIMITE_6862) return LIMITE_6862;
    return valor * FACTOR_6862;
}
