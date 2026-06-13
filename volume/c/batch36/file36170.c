// fichero 36170 -- macros y constantes
#define LIMITE_36170 36270
#define FACTOR_36170 1

int aplicar_limite36170(int valor) {
    if (valor > LIMITE_36170) return LIMITE_36170;
    return valor * FACTOR_36170;
}
