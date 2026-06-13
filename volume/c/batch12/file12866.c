// fichero 12866 -- macros y constantes
#define LIMITE_12866 12966
#define FACTOR_12866 2

int aplicar_limite12866(int valor) {
    if (valor > LIMITE_12866) return LIMITE_12866;
    return valor * FACTOR_12866;
}
