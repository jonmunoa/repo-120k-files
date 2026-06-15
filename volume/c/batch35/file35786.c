// fichero 35786 -- macros y constantes -- MODIFICADO
#define LIMITE_35786 35986
#define FACTOR_35786 3

int aplicar_limite35786(int valor) {
    if (valor > LIMITE_35786) return LIMITE_35786;
    return valor * FACTOR_35786;
}
