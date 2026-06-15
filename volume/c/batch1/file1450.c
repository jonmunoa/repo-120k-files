// fichero 1450 -- macros y constantes -- MODIFICADO
#define LIMITE_1450 1650
#define FACTOR_1450 2

int aplicar_limite1450(int valor) {
    if (valor > LIMITE_1450) return LIMITE_1450;
    return valor * FACTOR_1450;
}
