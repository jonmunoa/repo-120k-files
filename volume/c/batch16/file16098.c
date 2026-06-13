// fichero 16098 -- macros y constantes
#define LIMITE_16098 16198
#define FACTOR_16098 4

int aplicar_limite16098(int valor) {
    if (valor > LIMITE_16098) return LIMITE_16098;
    return valor * FACTOR_16098;
}
