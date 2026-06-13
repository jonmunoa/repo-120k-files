// fichero 2866 -- macros y constantes
#define LIMITE_2866 2966
#define FACTOR_2866 2

int aplicar_limite2866(int valor) {
    if (valor > LIMITE_2866) return LIMITE_2866;
    return valor * FACTOR_2866;
}
