// fichero 20866 -- macros y constantes
#define LIMITE_20866 20966
#define FACTOR_20866 2

int aplicar_limite20866(int valor) {
    if (valor > LIMITE_20866) return LIMITE_20866;
    return valor * FACTOR_20866;
}
