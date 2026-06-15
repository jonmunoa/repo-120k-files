// fichero 30862 -- macros y constantes -- MODIFICADO
#define LIMITE_30862 31062
#define FACTOR_30862 4

int aplicar_limite30862(int valor) {
    if (valor > LIMITE_30862) return LIMITE_30862;
    return valor * FACTOR_30862;
}
