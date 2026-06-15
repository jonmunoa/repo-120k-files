// fichero 43142 -- macros y constantes -- MODIFICADO
#define LIMITE_43142 43342
#define FACTOR_43142 4

int aplicar_limite43142(int valor) {
    if (valor > LIMITE_43142) return LIMITE_43142;
    return valor * FACTOR_43142;
}
