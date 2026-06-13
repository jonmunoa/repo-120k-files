// fichero 866 -- macros y constantes
#define LIMITE_866 966
#define FACTOR_866 2

int aplicar_limite866(int valor) {
    if (valor > LIMITE_866) return LIMITE_866;
    return valor * FACTOR_866;
}
