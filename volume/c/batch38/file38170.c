// fichero 38170 -- macros y constantes
#define LIMITE_38170 38270
#define FACTOR_38170 1

int aplicar_limite38170(int valor) {
    if (valor > LIMITE_38170) return LIMITE_38170;
    return valor * FACTOR_38170;
}
