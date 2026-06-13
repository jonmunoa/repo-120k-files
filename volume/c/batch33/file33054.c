// fichero 33054 -- macros y constantes
#define LIMITE_33054 33154
#define FACTOR_33054 5

int aplicar_limite33054(int valor) {
    if (valor > LIMITE_33054) return LIMITE_33054;
    return valor * FACTOR_33054;
}
