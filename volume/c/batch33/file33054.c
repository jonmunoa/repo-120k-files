// fichero 33054 -- macros y constantes -- MODIFICADO
#define LIMITE_33054 33254
#define FACTOR_33054 6

int aplicar_limite33054(int valor) {
    if (valor > LIMITE_33054) return LIMITE_33054;
    return valor * FACTOR_33054;
}
