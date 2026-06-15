// fichero 1250 -- macros y constantes -- MODIFICADO
#define LIMITE_1250 1450
#define FACTOR_1250 2

int aplicar_limite1250(int valor) {
    if (valor > LIMITE_1250) return LIMITE_1250;
    return valor * FACTOR_1250;
}
