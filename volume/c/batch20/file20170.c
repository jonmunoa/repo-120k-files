// fichero 20170 -- macros y constantes
#define LIMITE_20170 20270
#define FACTOR_20170 1

int aplicar_limite20170(int valor) {
    if (valor > LIMITE_20170) return LIMITE_20170;
    return valor * FACTOR_20170;
}
