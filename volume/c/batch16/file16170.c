// fichero 16170 -- macros y constantes
#define LIMITE_16170 16270
#define FACTOR_16170 1

int aplicar_limite16170(int valor) {
    if (valor > LIMITE_16170) return LIMITE_16170;
    return valor * FACTOR_16170;
}
