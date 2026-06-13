// fichero 42866 -- macros y constantes
#define LIMITE_42866 42966
#define FACTOR_42866 2

int aplicar_limite42866(int valor) {
    if (valor > LIMITE_42866) return LIMITE_42866;
    return valor * FACTOR_42866;
}
