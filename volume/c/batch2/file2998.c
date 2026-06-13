// fichero 2998 -- macros y constantes
#define LIMITE_2998 3098
#define FACTOR_2998 4

int aplicar_limite2998(int valor) {
    if (valor > LIMITE_2998) return LIMITE_2998;
    return valor * FACTOR_2998;
}
