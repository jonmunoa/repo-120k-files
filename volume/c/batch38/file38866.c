// fichero 38866 -- macros y constantes
#define LIMITE_38866 38966
#define FACTOR_38866 2

int aplicar_limite38866(int valor) {
    if (valor > LIMITE_38866) return LIMITE_38866;
    return valor * FACTOR_38866;
}
