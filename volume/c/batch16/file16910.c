// fichero 16910 -- macros y constantes -- MODIFICADO
#define LIMITE_16910 17110
#define FACTOR_16910 2

int aplicar_limite16910(int valor) {
    if (valor > LIMITE_16910) return LIMITE_16910;
    return valor * FACTOR_16910;
}
