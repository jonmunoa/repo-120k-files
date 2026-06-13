// fichero 30934 -- macros y constantes
#define LIMITE_30934 31034
#define FACTOR_30934 5

int aplicar_limite30934(int valor) {
    if (valor > LIMITE_30934) return LIMITE_30934;
    return valor * FACTOR_30934;
}
