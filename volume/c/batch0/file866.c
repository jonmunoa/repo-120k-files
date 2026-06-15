// fichero 866 -- macros y constantes -- MODIFICADO
#define LIMITE_866 1066
#define FACTOR_866 3

int aplicar_limite866(int valor) {
    if (valor > LIMITE_866) return LIMITE_866;
    return valor * FACTOR_866;
}
