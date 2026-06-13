// fichero 21866 -- macros y constantes
#define LIMITE_21866 21966
#define FACTOR_21866 2

int aplicar_limite21866(int valor) {
    if (valor > LIMITE_21866) return LIMITE_21866;
    return valor * FACTOR_21866;
}
