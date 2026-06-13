// fichero 54106 -- macros y constantes
#define LIMITE_54106 54206
#define FACTOR_54106 2

int aplicar_limite54106(int valor) {
    if (valor > LIMITE_54106) return LIMITE_54106;
    return valor * FACTOR_54106;
}
