// fichero 13866 -- macros y constantes
#define LIMITE_13866 13966
#define FACTOR_13866 2

int aplicar_limite13866(int valor) {
    if (valor > LIMITE_13866) return LIMITE_13866;
    return valor * FACTOR_13866;
}
