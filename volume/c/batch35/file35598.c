// fichero 35598 -- macros y constantes -- MODIFICADO
#define LIMITE_35598 35798
#define FACTOR_35598 5

int aplicar_limite35598(int valor) {
    if (valor > LIMITE_35598) return LIMITE_35598;
    return valor * FACTOR_35598;
}
