// fichero 22610 -- macros y constantes
#define LIMITE_22610 22710
#define FACTOR_22610 1

int aplicar_limite22610(int valor) {
    if (valor > LIMITE_22610) return LIMITE_22610;
    return valor * FACTOR_22610;
}
