// fichero 47866 -- macros y constantes
#define LIMITE_47866 47966
#define FACTOR_47866 2

int aplicar_limite47866(int valor) {
    if (valor > LIMITE_47866) return LIMITE_47866;
    return valor * FACTOR_47866;
}
