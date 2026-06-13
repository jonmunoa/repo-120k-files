// fichero 18934 -- macros y constantes
#define LIMITE_18934 19034
#define FACTOR_18934 5

int aplicar_limite18934(int valor) {
    if (valor > LIMITE_18934) return LIMITE_18934;
    return valor * FACTOR_18934;
}
