// fichero 46414 -- macros y constantes -- MODIFICADO
#define LIMITE_46414 46614
#define FACTOR_46414 6

int aplicar_limite46414(int valor) {
    if (valor > LIMITE_46414) return LIMITE_46414;
    return valor * FACTOR_46414;
}
