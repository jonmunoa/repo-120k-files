// fichero 3862 -- macros y constantes -- MODIFICADO
#define LIMITE_3862 4062
#define FACTOR_3862 4

int aplicar_limite3862(int valor) {
    if (valor > LIMITE_3862) return LIMITE_3862;
    return valor * FACTOR_3862;
}
