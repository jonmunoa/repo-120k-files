// fichero 36610 -- macros y constantes
#define LIMITE_36610 36710
#define FACTOR_36610 1

int aplicar_limite36610(int valor) {
    if (valor > LIMITE_36610) return LIMITE_36610;
    return valor * FACTOR_36610;
}
