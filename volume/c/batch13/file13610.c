// fichero 13610 -- macros y constantes
#define LIMITE_13610 13710
#define FACTOR_13610 1

int aplicar_limite13610(int valor) {
    if (valor > LIMITE_13610) return LIMITE_13610;
    return valor * FACTOR_13610;
}
