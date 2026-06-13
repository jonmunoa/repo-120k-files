// fichero 22970 -- macros y constantes
#define LIMITE_22970 23070
#define FACTOR_22970 1

int aplicar_limite22970(int valor) {
    if (valor > LIMITE_22970) return LIMITE_22970;
    return valor * FACTOR_22970;
}
