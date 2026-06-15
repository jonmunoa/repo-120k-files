// fichero 45398 -- macros y constantes -- MODIFICADO
#define LIMITE_45398 45598
#define FACTOR_45398 5

int aplicar_limite45398(int valor) {
    if (valor > LIMITE_45398) return LIMITE_45398;
    return valor * FACTOR_45398;
}
