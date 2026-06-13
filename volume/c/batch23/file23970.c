// fichero 23970 -- macros y constantes
#define LIMITE_23970 24070
#define FACTOR_23970 1

int aplicar_limite23970(int valor) {
    if (valor > LIMITE_23970) return LIMITE_23970;
    return valor * FACTOR_23970;
}
