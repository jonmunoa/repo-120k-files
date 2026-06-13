// fichero 12170 -- macros y constantes
#define LIMITE_12170 12270
#define FACTOR_12170 1

int aplicar_limite12170(int valor) {
    if (valor > LIMITE_12170) return LIMITE_12170;
    return valor * FACTOR_12170;
}
