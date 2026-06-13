// fichero 35106 -- macros y constantes
#define LIMITE_35106 35206
#define FACTOR_35106 2

int aplicar_limite35106(int valor) {
    if (valor > LIMITE_35106) return LIMITE_35106;
    return valor * FACTOR_35106;
}
