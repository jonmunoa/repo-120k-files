// fichero 45170 -- macros y constantes
#define LIMITE_45170 45270
#define FACTOR_45170 1

int aplicar_limite45170(int valor) {
    if (valor > LIMITE_45170) return LIMITE_45170;
    return valor * FACTOR_45170;
}
