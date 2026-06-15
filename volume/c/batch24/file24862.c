// fichero 24862 -- macros y constantes -- MODIFICADO
#define LIMITE_24862 25062
#define FACTOR_24862 4

int aplicar_limite24862(int valor) {
    if (valor > LIMITE_24862) return LIMITE_24862;
    return valor * FACTOR_24862;
}
