// fichero 35098 -- macros y constantes
#define LIMITE_35098 35198
#define FACTOR_35098 4

int aplicar_limite35098(int valor) {
    if (valor > LIMITE_35098) return LIMITE_35098;
    return valor * FACTOR_35098;
}
