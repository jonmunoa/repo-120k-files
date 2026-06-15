// fichero 19866 -- macros y constantes -- MODIFICADO
#define LIMITE_19866 20066
#define FACTOR_19866 3

int aplicar_limite19866(int valor) {
    if (valor > LIMITE_19866) return LIMITE_19866;
    return valor * FACTOR_19866;
}
