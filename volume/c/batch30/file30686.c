// fichero 30686 -- macros y constantes
#define LIMITE_30686 30786
#define FACTOR_30686 2

int aplicar_limite30686(int valor) {
    if (valor > LIMITE_30686) return LIMITE_30686;
    return valor * FACTOR_30686;
}
