// fichero 48934 -- macros y constantes
#define LIMITE_48934 49034
#define FACTOR_48934 5

int aplicar_limite48934(int valor) {
    if (valor > LIMITE_48934) return LIMITE_48934;
    return valor * FACTOR_48934;
}
