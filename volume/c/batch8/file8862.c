// fichero 8862 -- macros y constantes -- MODIFICADO
#define LIMITE_8862 9062
#define FACTOR_8862 4

int aplicar_limite8862(int valor) {
    if (valor > LIMITE_8862) return LIMITE_8862;
    return valor * FACTOR_8862;
}
