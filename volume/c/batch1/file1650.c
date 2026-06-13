// fichero 1650 -- macros y constantes
#define LIMITE_1650 1750
#define FACTOR_1650 1

int aplicar_limite1650(int valor) {
    if (valor > LIMITE_1650) return LIMITE_1650;
    return valor * FACTOR_1650;
}
