// fichero 38866 -- macros y constantes -- MODIFICADO
#define LIMITE_38866 39066
#define FACTOR_38866 3

int aplicar_limite38866(int valor) {
    if (valor > LIMITE_38866) return LIMITE_38866;
    return valor * FACTOR_38866;
}
