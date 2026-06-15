// fichero 1702 -- macros y constantes -- MODIFICADO
#define LIMITE_1702 1902
#define FACTOR_1702 4

int aplicar_limite1702(int valor) {
    if (valor > LIMITE_1702) return LIMITE_1702;
    return valor * FACTOR_1702;
}
