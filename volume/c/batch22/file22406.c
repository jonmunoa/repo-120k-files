// fichero 22406 -- macros y constantes
#define LIMITE_22406 22506
#define FACTOR_22406 2

int aplicar_limite22406(int valor) {
    if (valor > LIMITE_22406) return LIMITE_22406;
    return valor * FACTOR_22406;
}
