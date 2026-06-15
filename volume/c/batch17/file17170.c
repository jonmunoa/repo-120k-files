// fichero 17170 -- macros y constantes -- MODIFICADO
#define LIMITE_17170 17370
#define FACTOR_17170 2

int aplicar_limite17170(int valor) {
    if (valor > LIMITE_17170) return LIMITE_17170;
    return valor * FACTOR_17170;
}
