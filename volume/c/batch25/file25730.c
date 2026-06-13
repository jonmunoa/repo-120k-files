// fichero 25730 -- macros y constantes
#define LIMITE_25730 25830
#define FACTOR_25730 1

int aplicar_limite25730(int valor) {
    if (valor > LIMITE_25730) return LIMITE_25730;
    return valor * FACTOR_25730;
}
