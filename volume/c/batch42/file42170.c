// fichero 42170 -- macros y constantes
#define LIMITE_42170 42270
#define FACTOR_42170 1

int aplicar_limite42170(int valor) {
    if (valor > LIMITE_42170) return LIMITE_42170;
    return valor * FACTOR_42170;
}
