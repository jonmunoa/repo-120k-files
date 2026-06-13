// fichero 5170 -- macros y constantes
#define LIMITE_5170 5270
#define FACTOR_5170 1

int aplicar_limite5170(int valor) {
    if (valor > LIMITE_5170) return LIMITE_5170;
    return valor * FACTOR_5170;
}
