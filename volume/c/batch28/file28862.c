// fichero 28862 -- macros y constantes -- MODIFICADO
#define LIMITE_28862 29062
#define FACTOR_28862 4

int aplicar_limite28862(int valor) {
    if (valor > LIMITE_28862) return LIMITE_28862;
    return valor * FACTOR_28862;
}
