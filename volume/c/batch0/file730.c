// fichero 730 -- macros y constantes
#define LIMITE_730 830
#define FACTOR_730 1

int aplicar_limite730(int valor) {
    if (valor > LIMITE_730) return LIMITE_730;
    return valor * FACTOR_730;
}
