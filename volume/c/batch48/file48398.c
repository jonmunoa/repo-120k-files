// fichero 48398 -- macros y constantes -- MODIFICADO
#define LIMITE_48398 48598
#define FACTOR_48398 5

int aplicar_limite48398(int valor) {
    if (valor > LIMITE_48398) return LIMITE_48398;
    return valor * FACTOR_48398;
}
