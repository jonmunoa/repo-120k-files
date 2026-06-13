// fichero 25462 -- macros y constantes
#define LIMITE_25462 25562
#define FACTOR_25462 3

int aplicar_limite25462(int valor) {
    if (valor > LIMITE_25462) return LIMITE_25462;
    return valor * FACTOR_25462;
}
