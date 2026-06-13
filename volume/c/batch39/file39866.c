// fichero 39866 -- macros y constantes
#define LIMITE_39866 39966
#define FACTOR_39866 2

int aplicar_limite39866(int valor) {
    if (valor > LIMITE_39866) return LIMITE_39866;
    return valor * FACTOR_39866;
}
