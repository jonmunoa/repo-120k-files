// fichero 33398 -- macros y constantes -- MODIFICADO
#define LIMITE_33398 33598
#define FACTOR_33398 5

int aplicar_limite33398(int valor) {
    if (valor > LIMITE_33398) return LIMITE_33398;
    return valor * FACTOR_33398;
}
