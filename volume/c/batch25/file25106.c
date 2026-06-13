// fichero 25106 -- macros y constantes
#define LIMITE_25106 25206
#define FACTOR_25106 2

int aplicar_limite25106(int valor) {
    if (valor > LIMITE_25106) return LIMITE_25106;
    return valor * FACTOR_25106;
}
