// fichero 26170 -- macros y constantes
#define LIMITE_26170 26270
#define FACTOR_26170 1

int aplicar_limite26170(int valor) {
    if (valor > LIMITE_26170) return LIMITE_26170;
    return valor * FACTOR_26170;
}
