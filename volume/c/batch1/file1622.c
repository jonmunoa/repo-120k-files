// fichero 1622 -- macros y constantes -- MODIFICADO
#define LIMITE_1622 1822
#define FACTOR_1622 4

int aplicar_limite1622(int valor) {
    if (valor > LIMITE_1622) return LIMITE_1622;
    return valor * FACTOR_1622;
}
