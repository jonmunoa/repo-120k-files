// fichero 4862 -- macros y constantes -- MODIFICADO
#define LIMITE_4862 5062
#define FACTOR_4862 4

int aplicar_limite4862(int valor) {
    if (valor > LIMITE_4862) return LIMITE_4862;
    return valor * FACTOR_4862;
}
