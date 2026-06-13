// fichero 23610 -- macros y constantes
#define LIMITE_23610 23710
#define FACTOR_23610 1

int aplicar_limite23610(int valor) {
    if (valor > LIMITE_23610) return LIMITE_23610;
    return valor * FACTOR_23610;
}
