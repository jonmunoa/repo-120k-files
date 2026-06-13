// fichero 7446 -- macros y constantes
#define LIMITE_7446 7546
#define FACTOR_7446 2

int aplicar_limite7446(int valor) {
    if (valor > LIMITE_7446) return LIMITE_7446;
    return valor * FACTOR_7446;
}
