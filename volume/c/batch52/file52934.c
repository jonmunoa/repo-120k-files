// fichero 52934 -- macros y constantes
#define LIMITE_52934 53034
#define FACTOR_52934 5

int aplicar_limite52934(int valor) {
    if (valor > LIMITE_52934) return LIMITE_52934;
    return valor * FACTOR_52934;
}
