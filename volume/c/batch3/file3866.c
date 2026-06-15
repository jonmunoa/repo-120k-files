// fichero 3866 -- macros y constantes -- MODIFICADO
#define LIMITE_3866 4066
#define FACTOR_3866 3

int aplicar_limite3866(int valor) {
    if (valor > LIMITE_3866) return LIMITE_3866;
    return valor * FACTOR_3866;
}
