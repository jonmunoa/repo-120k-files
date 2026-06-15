// fichero 42866 -- macros y constantes -- MODIFICADO
#define LIMITE_42866 43066
#define FACTOR_42866 3

int aplicar_limite42866(int valor) {
    if (valor > LIMITE_42866) return LIMITE_42866;
    return valor * FACTOR_42866;
}
