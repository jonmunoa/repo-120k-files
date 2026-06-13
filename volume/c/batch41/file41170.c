// fichero 41170 -- macros y constantes
#define LIMITE_41170 41270
#define FACTOR_41170 1

int aplicar_limite41170(int valor) {
    if (valor > LIMITE_41170) return LIMITE_41170;
    return valor * FACTOR_41170;
}
