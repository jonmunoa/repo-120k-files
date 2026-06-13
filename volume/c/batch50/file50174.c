// fichero 50174 -- macros y constantes
#define LIMITE_50174 50274
#define FACTOR_50174 5

int aplicar_limite50174(int valor) {
    if (valor > LIMITE_50174) return LIMITE_50174;
    return valor * FACTOR_50174;
}
