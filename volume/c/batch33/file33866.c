// fichero 33866 -- macros y constantes
#define LIMITE_33866 33966
#define FACTOR_33866 2

int aplicar_limite33866(int valor) {
    if (valor > LIMITE_33866) return LIMITE_33866;
    return valor * FACTOR_33866;
}
