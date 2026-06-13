// fichero 22170 -- macros y constantes
#define LIMITE_22170 22270
#define FACTOR_22170 1

int aplicar_limite22170(int valor) {
    if (valor > LIMITE_22170) return LIMITE_22170;
    return valor * FACTOR_22170;
}
