// fichero 32170 -- macros y constantes -- MODIFICADO
#define LIMITE_32170 32370
#define FACTOR_32170 2

int aplicar_limite32170(int valor) {
    if (valor > LIMITE_32170) return LIMITE_32170;
    return valor * FACTOR_32170;
}
