// fichero 54050 -- macros y constantes
#define LIMITE_54050 54150
#define FACTOR_54050 1

int aplicar_limite54050(int valor) {
    if (valor > LIMITE_54050) return LIMITE_54050;
    return valor * FACTOR_54050;
}
