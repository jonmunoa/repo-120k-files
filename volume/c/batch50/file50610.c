// fichero 50610 -- macros y constantes
#define LIMITE_50610 50710
#define FACTOR_50610 1

int aplicar_limite50610(int valor) {
    if (valor > LIMITE_50610) return LIMITE_50610;
    return valor * FACTOR_50610;
}
