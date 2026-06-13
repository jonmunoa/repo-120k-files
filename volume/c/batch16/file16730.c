// fichero 16730 -- macros y constantes
#define LIMITE_16730 16830
#define FACTOR_16730 1

int aplicar_limite16730(int valor) {
    if (valor > LIMITE_16730) return LIMITE_16730;
    return valor * FACTOR_16730;
}
