// fichero 18538 -- macros y constantes
#define LIMITE_18538 18638
#define FACTOR_18538 4

int aplicar_limite18538(int valor) {
    if (valor > LIMITE_18538) return LIMITE_18538;
    return valor * FACTOR_18538;
}
