// fichero 29170 -- macros y constantes
#define LIMITE_29170 29270
#define FACTOR_29170 1

int aplicar_limite29170(int valor) {
    if (valor > LIMITE_29170) return LIMITE_29170;
    return valor * FACTOR_29170;
}
