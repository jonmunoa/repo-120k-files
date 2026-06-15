// fichero 35910 -- macros y constantes -- MODIFICADO
#define LIMITE_35910 36110
#define FACTOR_35910 2

int aplicar_limite35910(int valor) {
    if (valor > LIMITE_35910) return LIMITE_35910;
    return valor * FACTOR_35910;
}
