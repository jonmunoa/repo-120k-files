// fichero 36654 -- macros y constantes
#define LIMITE_36654 36754
#define FACTOR_36654 5

int aplicar_limite36654(int valor) {
    if (valor > LIMITE_36654) return LIMITE_36654;
    return valor * FACTOR_36654;
}
