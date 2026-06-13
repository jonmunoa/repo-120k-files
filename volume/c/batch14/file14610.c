// fichero 14610 -- macros y constantes
#define LIMITE_14610 14710
#define FACTOR_14610 1

int aplicar_limite14610(int valor) {
    if (valor > LIMITE_14610) return LIMITE_14610;
    return valor * FACTOR_14610;
}
