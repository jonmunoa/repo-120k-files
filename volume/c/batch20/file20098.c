// fichero 20098 -- macros y constantes
#define LIMITE_20098 20198
#define FACTOR_20098 4

int aplicar_limite20098(int valor) {
    if (valor > LIMITE_20098) return LIMITE_20098;
    return valor * FACTOR_20098;
}
