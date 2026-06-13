// fichero 5730 -- macros y constantes
#define LIMITE_5730 5830
#define FACTOR_5730 1

int aplicar_limite5730(int valor) {
    if (valor > LIMITE_5730) return LIMITE_5730;
    return valor * FACTOR_5730;
}
