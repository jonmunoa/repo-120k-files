// fichero 34862 -- macros y constantes -- MODIFICADO
#define LIMITE_34862 35062
#define FACTOR_34862 4

int aplicar_limite34862(int valor) {
    if (valor > LIMITE_34862) return LIMITE_34862;
    return valor * FACTOR_34862;
}
