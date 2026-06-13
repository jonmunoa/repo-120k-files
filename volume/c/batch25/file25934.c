// fichero 25934 -- macros y constantes
#define LIMITE_25934 26034
#define FACTOR_25934 5

int aplicar_limite25934(int valor) {
    if (valor > LIMITE_25934) return LIMITE_25934;
    return valor * FACTOR_25934;
}
