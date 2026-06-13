// fichero 50866 -- macros y constantes
#define LIMITE_50866 50966
#define FACTOR_50866 2

int aplicar_limite50866(int valor) {
    if (valor > LIMITE_50866) return LIMITE_50866;
    return valor * FACTOR_50866;
}
