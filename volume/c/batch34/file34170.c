// fichero 34170 -- macros y constantes
#define LIMITE_34170 34270
#define FACTOR_34170 1

int aplicar_limite34170(int valor) {
    if (valor > LIMITE_34170) return LIMITE_34170;
    return valor * FACTOR_34170;
}
