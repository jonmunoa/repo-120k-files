// fichero 31398 -- macros y constantes -- MODIFICADO
#define LIMITE_31398 31598
#define FACTOR_31398 5

int aplicar_limite31398(int valor) {
    if (valor > LIMITE_31398) return LIMITE_31398;
    return valor * FACTOR_31398;
}
