// fichero 46414 -- macros y constantes
#define LIMITE_46414 46514
#define FACTOR_46414 5

int aplicar_limite46414(int valor) {
    if (valor > LIMITE_46414) return LIMITE_46414;
    return valor * FACTOR_46414;
}
