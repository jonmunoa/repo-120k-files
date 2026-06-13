// fichero 51866 -- macros y constantes
#define LIMITE_51866 51966
#define FACTOR_51866 2

int aplicar_limite51866(int valor) {
    if (valor > LIMITE_51866) return LIMITE_51866;
    return valor * FACTOR_51866;
}
