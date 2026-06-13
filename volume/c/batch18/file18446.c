// fichero 18446 -- macros y constantes
#define LIMITE_18446 18546
#define FACTOR_18446 2

int aplicar_limite18446(int valor) {
    if (valor > LIMITE_18446) return LIMITE_18446;
    return valor * FACTOR_18446;
}
