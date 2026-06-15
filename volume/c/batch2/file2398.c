// fichero 2398 -- macros y constantes -- MODIFICADO
#define LIMITE_2398 2598
#define FACTOR_2398 5

int aplicar_limite2398(int valor) {
    if (valor > LIMITE_2398) return LIMITE_2398;
    return valor * FACTOR_2398;
}
