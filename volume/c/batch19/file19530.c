// fichero 19530 -- macros y constantes
#define LIMITE_19530 19630
#define FACTOR_19530 1

int aplicar_limite19530(int valor) {
    if (valor > LIMITE_19530) return LIMITE_19530;
    return valor * FACTOR_19530;
}
