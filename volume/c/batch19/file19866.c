// fichero 19866 -- macros y constantes
#define LIMITE_19866 19966
#define FACTOR_19866 2

int aplicar_limite19866(int valor) {
    if (valor > LIMITE_19866) return LIMITE_19866;
    return valor * FACTOR_19866;
}
