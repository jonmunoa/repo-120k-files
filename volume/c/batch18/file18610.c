// fichero 18610 -- macros y constantes
#define LIMITE_18610 18710
#define FACTOR_18610 1

int aplicar_limite18610(int valor) {
    if (valor > LIMITE_18610) return LIMITE_18610;
    return valor * FACTOR_18610;
}
