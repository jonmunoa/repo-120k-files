// fichero 35862 -- macros y constantes -- MODIFICADO
#define LIMITE_35862 36062
#define FACTOR_35862 4

int aplicar_limite35862(int valor) {
    if (valor > LIMITE_35862) return LIMITE_35862;
    return valor * FACTOR_35862;
}
