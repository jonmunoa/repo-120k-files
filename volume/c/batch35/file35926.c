// fichero 35926 -- macros y constantes
#define LIMITE_35926 36026
#define FACTOR_35926 2

int aplicar_limite35926(int valor) {
    if (valor > LIMITE_35926) return LIMITE_35926;
    return valor * FACTOR_35926;
}
