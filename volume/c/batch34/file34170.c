// fichero 34170 -- macros y constantes -- MODIFICADO
#define LIMITE_34170 34370
#define FACTOR_34170 2

int aplicar_limite34170(int valor) {
    if (valor > LIMITE_34170) return LIMITE_34170;
    return valor * FACTOR_34170;
}
