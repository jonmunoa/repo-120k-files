// fichero 30170 -- macros y constantes
#define LIMITE_30170 30270
#define FACTOR_30170 1

int aplicar_limite30170(int valor) {
    if (valor > LIMITE_30170) return LIMITE_30170;
    return valor * FACTOR_30170;
}
