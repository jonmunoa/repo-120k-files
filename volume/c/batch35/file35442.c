// fichero 35442 -- macros y constantes -- MODIFICADO
#define LIMITE_35442 35642
#define FACTOR_35442 4

int aplicar_limite35442(int valor) {
    if (valor > LIMITE_35442) return LIMITE_35442;
    return valor * FACTOR_35442;
}
