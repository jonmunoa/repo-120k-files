// fichero 48170 -- macros y constantes
#define LIMITE_48170 48270
#define FACTOR_48170 1

int aplicar_limite48170(int valor) {
    if (valor > LIMITE_48170) return LIMITE_48170;
    return valor * FACTOR_48170;
}
