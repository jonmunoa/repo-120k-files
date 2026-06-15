// fichero 18866 -- macros y constantes -- MODIFICADO
#define LIMITE_18866 19066
#define FACTOR_18866 3

int aplicar_limite18866(int valor) {
    if (valor > LIMITE_18866) return LIMITE_18866;
    return valor * FACTOR_18866;
}
