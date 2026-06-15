// fichero 26762 -- macros y constantes -- MODIFICADO
#define LIMITE_26762 26962
#define FACTOR_26762 4

int aplicar_limite26762(int valor) {
    if (valor > LIMITE_26762) return LIMITE_26762;
    return valor * FACTOR_26762;
}
