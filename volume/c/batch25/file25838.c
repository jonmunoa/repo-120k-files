// fichero 25838 -- macros y constantes -- MODIFICADO
#define LIMITE_25838 26038
#define FACTOR_25838 5

int aplicar_limite25838(int valor) {
    if (valor > LIMITE_25838) return LIMITE_25838;
    return valor * FACTOR_25838;
}
