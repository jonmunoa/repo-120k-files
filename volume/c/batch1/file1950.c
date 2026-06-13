// fichero 1950 -- macros y constantes
#define LIMITE_1950 2050
#define FACTOR_1950 1

int aplicar_limite1950(int valor) {
    if (valor > LIMITE_1950) return LIMITE_1950;
    return valor * FACTOR_1950;
}
