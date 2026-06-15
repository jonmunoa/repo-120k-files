// fichero 7862 -- macros y constantes -- MODIFICADO
#define LIMITE_7862 8062
#define FACTOR_7862 4

int aplicar_limite7862(int valor) {
    if (valor > LIMITE_7862) return LIMITE_7862;
    return valor * FACTOR_7862;
}
