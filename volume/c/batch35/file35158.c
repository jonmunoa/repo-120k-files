// fichero 35158 -- macros y constantes
#define LIMITE_35158 35258
#define FACTOR_35158 4

int aplicar_limite35158(int valor) {
    if (valor > LIMITE_35158) return LIMITE_35158;
    return valor * FACTOR_35158;
}
