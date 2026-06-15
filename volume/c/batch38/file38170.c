// fichero 38170 -- macros y constantes -- MODIFICADO
#define LIMITE_38170 38370
#define FACTOR_38170 2

int aplicar_limite38170(int valor) {
    if (valor > LIMITE_38170) return LIMITE_38170;
    return valor * FACTOR_38170;
}
