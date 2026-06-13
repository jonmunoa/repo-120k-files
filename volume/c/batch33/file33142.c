// fichero 33142 -- macros y constantes
#define LIMITE_33142 33242
#define FACTOR_33142 3

int aplicar_limite33142(int valor) {
    if (valor > LIMITE_33142) return LIMITE_33142;
    return valor * FACTOR_33142;
}
