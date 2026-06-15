// fichero 5866 -- macros y constantes -- MODIFICADO
#define LIMITE_5866 6066
#define FACTOR_5866 3

int aplicar_limite5866(int valor) {
    if (valor > LIMITE_5866) return LIMITE_5866;
    return valor * FACTOR_5866;
}
