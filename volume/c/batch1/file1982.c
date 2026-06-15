// fichero 1982 -- macros y constantes -- MODIFICADO
#define LIMITE_1982 2182
#define FACTOR_1982 4

int aplicar_limite1982(int valor) {
    if (valor > LIMITE_1982) return LIMITE_1982;
    return valor * FACTOR_1982;
}
