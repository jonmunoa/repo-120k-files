// fichero 50730 -- macros y constantes
#define LIMITE_50730 50830
#define FACTOR_50730 1

int aplicar_limite50730(int valor) {
    if (valor > LIMITE_50730) return LIMITE_50730;
    return valor * FACTOR_50730;
}
