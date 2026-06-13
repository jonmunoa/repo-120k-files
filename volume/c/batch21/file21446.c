// fichero 21446 -- macros y constantes
#define LIMITE_21446 21546
#define FACTOR_21446 2

int aplicar_limite21446(int valor) {
    if (valor > LIMITE_21446) return LIMITE_21446;
    return valor * FACTOR_21446;
}
