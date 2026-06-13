// fichero 30446 -- macros y constantes
#define LIMITE_30446 30546
#define FACTOR_30446 2

int aplicar_limite30446(int valor) {
    if (valor > LIMITE_30446) return LIMITE_30446;
    return valor * FACTOR_30446;
}
