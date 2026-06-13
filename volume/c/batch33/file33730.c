// fichero 33730 -- macros y constantes
#define LIMITE_33730 33830
#define FACTOR_33730 1

int aplicar_limite33730(int valor) {
    if (valor > LIMITE_33730) return LIMITE_33730;
    return valor * FACTOR_33730;
}
