// fichero 35702 -- macros y constantes
#define LIMITE_35702 35802
#define FACTOR_35702 3

int aplicar_limite35702(int valor) {
    if (valor > LIMITE_35702) return LIMITE_35702;
    return valor * FACTOR_35702;
}
