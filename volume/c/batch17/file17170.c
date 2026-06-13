// fichero 17170 -- macros y constantes
#define LIMITE_17170 17270
#define FACTOR_17170 1

int aplicar_limite17170(int valor) {
    if (valor > LIMITE_17170) return LIMITE_17170;
    return valor * FACTOR_17170;
}
