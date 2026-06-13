// fichero 30654 -- macros y constantes
#define LIMITE_30654 30754
#define FACTOR_30654 5

int aplicar_limite30654(int valor) {
    if (valor > LIMITE_30654) return LIMITE_30654;
    return valor * FACTOR_30654;
}
