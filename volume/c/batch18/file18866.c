// fichero 18866 -- macros y constantes
#define LIMITE_18866 18966
#define FACTOR_18866 2

int aplicar_limite18866(int valor) {
    if (valor > LIMITE_18866) return LIMITE_18866;
    return valor * FACTOR_18866;
}
