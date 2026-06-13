// fichero 3446 -- macros y constantes
#define LIMITE_3446 3546
#define FACTOR_3446 2

int aplicar_limite3446(int valor) {
    if (valor > LIMITE_3446) return LIMITE_3446;
    return valor * FACTOR_3446;
}
