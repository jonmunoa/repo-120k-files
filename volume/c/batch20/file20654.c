// fichero 20654 -- macros y constantes
#define LIMITE_20654 20754
#define FACTOR_20654 5

int aplicar_limite20654(int valor) {
    if (valor > LIMITE_20654) return LIMITE_20654;
    return valor * FACTOR_20654;
}
