// fichero 52170 -- macros y constantes
#define LIMITE_52170 52270
#define FACTOR_52170 1

int aplicar_limite52170(int valor) {
    if (valor > LIMITE_52170) return LIMITE_52170;
    return valor * FACTOR_52170;
}
