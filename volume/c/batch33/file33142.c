// fichero 33142 -- macros y constantes -- MODIFICADO
#define LIMITE_33142 33342
#define FACTOR_33142 4

int aplicar_limite33142(int valor) {
    if (valor > LIMITE_33142) return LIMITE_33142;
    return valor * FACTOR_33142;
}
