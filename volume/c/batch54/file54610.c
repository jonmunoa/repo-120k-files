// fichero 54610 -- macros y constantes
#define LIMITE_54610 54710
#define FACTOR_54610 1

int aplicar_limite54610(int valor) {
    if (valor > LIMITE_54610) return LIMITE_54610;
    return valor * FACTOR_54610;
}
