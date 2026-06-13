// fichero 30738 -- macros y constantes
#define LIMITE_30738 30838
#define FACTOR_30738 4

int aplicar_limite30738(int valor) {
    if (valor > LIMITE_30738) return LIMITE_30738;
    return valor * FACTOR_30738;
}
