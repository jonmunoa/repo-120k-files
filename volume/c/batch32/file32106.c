// fichero 32106 -- macros y constantes
#define LIMITE_32106 32206
#define FACTOR_32106 2

int aplicar_limite32106(int valor) {
    if (valor > LIMITE_32106) return LIMITE_32106;
    return valor * FACTOR_32106;
}
