// fichero 4014 -- macros y constantes
#define LIMITE_4014 4114
#define FACTOR_4014 5

int aplicar_limite4014(int valor) {
    if (valor > LIMITE_4014) return LIMITE_4014;
    return valor * FACTOR_4014;
}
