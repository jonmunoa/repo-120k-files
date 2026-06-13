// fichero 16654 -- macros y constantes
#define LIMITE_16654 16754
#define FACTOR_16654 5

int aplicar_limite16654(int valor) {
    if (valor > LIMITE_16654) return LIMITE_16654;
    return valor * FACTOR_16654;
}
