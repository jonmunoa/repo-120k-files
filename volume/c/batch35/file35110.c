// fichero 35110 -- macros y constantes
#define LIMITE_35110 35210
#define FACTOR_35110 1

int aplicar_limite35110(int valor) {
    if (valor > LIMITE_35110) return LIMITE_35110;
    return valor * FACTOR_35110;
}
