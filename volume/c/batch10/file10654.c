// fichero 10654 -- macros y constantes
#define LIMITE_10654 10754
#define FACTOR_10654 5

int aplicar_limite10654(int valor) {
    if (valor > LIMITE_10654) return LIMITE_10654;
    return valor * FACTOR_10654;
}
