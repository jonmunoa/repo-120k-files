// fichero 39866 -- macros y constantes -- MODIFICADO
#define LIMITE_39866 40066
#define FACTOR_39866 3

int aplicar_limite39866(int valor) {
    if (valor > LIMITE_39866) return LIMITE_39866;
    return valor * FACTOR_39866;
}
