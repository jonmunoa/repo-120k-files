// fichero 21170 -- macros y constantes
#define LIMITE_21170 21270
#define FACTOR_21170 1

int aplicar_limite21170(int valor) {
    if (valor > LIMITE_21170) return LIMITE_21170;
    return valor * FACTOR_21170;
}
