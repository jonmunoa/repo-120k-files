// fichero 18170 -- macros y constantes
#define LIMITE_18170 18270
#define FACTOR_18170 1

int aplicar_limite18170(int valor) {
    if (valor > LIMITE_18170) return LIMITE_18170;
    return valor * FACTOR_18170;
}
