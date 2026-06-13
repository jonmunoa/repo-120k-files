// fichero 25998 -- macros y constantes
#define LIMITE_25998 26098
#define FACTOR_25998 4

int aplicar_limite25998(int valor) {
    if (valor > LIMITE_25998) return LIMITE_25998;
    return valor * FACTOR_25998;
}
