// fichero 6446 -- macros y constantes
#define LIMITE_6446 6546
#define FACTOR_6446 2

int aplicar_limite6446(int valor) {
    if (valor > LIMITE_6446) return LIMITE_6446;
    return valor * FACTOR_6446;
}
