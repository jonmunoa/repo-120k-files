// fichero 13862 -- macros y constantes -- MODIFICADO
#define LIMITE_13862 14062
#define FACTOR_13862 4

int aplicar_limite13862(int valor) {
    if (valor > LIMITE_13862) return LIMITE_13862;
    return valor * FACTOR_13862;
}
