// fichero 13654 -- macros y constantes
#define LIMITE_13654 13754
#define FACTOR_13654 5

int aplicar_limite13654(int valor) {
    if (valor > LIMITE_13654) return LIMITE_13654;
    return valor * FACTOR_13654;
}
