// fichero 16106 -- macros y constantes
#define LIMITE_16106 16206
#define FACTOR_16106 2

int aplicar_limite16106(int valor) {
    if (valor > LIMITE_16106) return LIMITE_16106;
    return valor * FACTOR_16106;
}
