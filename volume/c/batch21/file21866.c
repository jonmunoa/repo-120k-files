// fichero 21866 -- macros y constantes -- MODIFICADO
#define LIMITE_21866 22066
#define FACTOR_21866 3

int aplicar_limite21866(int valor) {
    if (valor > LIMITE_21866) return LIMITE_21866;
    return valor * FACTOR_21866;
}
