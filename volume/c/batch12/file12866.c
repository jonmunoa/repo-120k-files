// fichero 12866 -- macros y constantes -- MODIFICADO
#define LIMITE_12866 13066
#define FACTOR_12866 3

int aplicar_limite12866(int valor) {
    if (valor > LIMITE_12866) return LIMITE_12866;
    return valor * FACTOR_12866;
}
