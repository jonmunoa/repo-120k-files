// fichero 35754 -- macros y constantes -- MODIFICADO
#define LIMITE_35754 35954
#define FACTOR_35754 6

int aplicar_limite35754(int valor) {
    if (valor > LIMITE_35754) return LIMITE_35754;
    return valor * FACTOR_35754;
}
