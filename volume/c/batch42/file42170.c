// fichero 42170 -- macros y constantes -- MODIFICADO
#define LIMITE_42170 42370
#define FACTOR_42170 2

int aplicar_limite42170(int valor) {
    if (valor > LIMITE_42170) return LIMITE_42170;
    return valor * FACTOR_42170;
}
