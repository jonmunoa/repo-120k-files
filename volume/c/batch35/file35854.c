// fichero 35854 -- macros y constantes
#define LIMITE_35854 35954
#define FACTOR_35854 5

int aplicar_limite35854(int valor) {
    if (valor > LIMITE_35854) return LIMITE_35854;
    return valor * FACTOR_35854;
}
