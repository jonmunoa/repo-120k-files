// fichero 36446 -- macros y constantes
#define LIMITE_36446 36546
#define FACTOR_36446 2

int aplicar_limite36446(int valor) {
    if (valor > LIMITE_36446) return LIMITE_36446;
    return valor * FACTOR_36446;
}
