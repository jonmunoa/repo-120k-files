// fichero 18170 -- macros y constantes -- MODIFICADO
#define LIMITE_18170 18370
#define FACTOR_18170 2

int aplicar_limite18170(int valor) {
    if (valor > LIMITE_18170) return LIMITE_18170;
    return valor * FACTOR_18170;
}
