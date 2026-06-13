// fichero 26730 -- macros y constantes
#define LIMITE_26730 26830
#define FACTOR_26730 1

int aplicar_limite26730(int valor) {
    if (valor > LIMITE_26730) return LIMITE_26730;
    return valor * FACTOR_26730;
}
