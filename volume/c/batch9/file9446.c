// fichero 9446 -- macros y constantes
#define LIMITE_9446 9546
#define FACTOR_9446 2

int aplicar_limite9446(int valor) {
    if (valor > LIMITE_9446) return LIMITE_9446;
    return valor * FACTOR_9446;
}
