// fichero 31998 -- macros y constantes
#define LIMITE_31998 32098
#define FACTOR_31998 4

int aplicar_limite31998(int valor) {
    if (valor > LIMITE_31998) return LIMITE_31998;
    return valor * FACTOR_31998;
}
