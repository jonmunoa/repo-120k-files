// fichero 2446 -- macros y constantes
#define LIMITE_2446 2546
#define FACTOR_2446 2

int aplicar_limite2446(int valor) {
    if (valor > LIMITE_2446) return LIMITE_2446;
    return valor * FACTOR_2446;
}
