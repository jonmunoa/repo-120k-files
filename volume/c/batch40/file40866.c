// fichero 40866 -- macros y constantes
#define LIMITE_40866 40966
#define FACTOR_40866 2

int aplicar_limite40866(int valor) {
    if (valor > LIMITE_40866) return LIMITE_40866;
    return valor * FACTOR_40866;
}
