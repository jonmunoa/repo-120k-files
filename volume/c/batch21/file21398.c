// fichero 21398 -- macros y constantes -- MODIFICADO
#define LIMITE_21398 21598
#define FACTOR_21398 5

int aplicar_limite21398(int valor) {
    if (valor > LIMITE_21398) return LIMITE_21398;
    return valor * FACTOR_21398;
}
