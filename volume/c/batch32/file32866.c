// fichero 32866 -- macros y constantes
#define LIMITE_32866 32966
#define FACTOR_32866 2

int aplicar_limite32866(int valor) {
    if (valor > LIMITE_32866) return LIMITE_32866;
    return valor * FACTOR_32866;
}
