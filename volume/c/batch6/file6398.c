// fichero 6398 -- macros y constantes -- MODIFICADO
#define LIMITE_6398 6598
#define FACTOR_6398 5

int aplicar_limite6398(int valor) {
    if (valor > LIMITE_6398) return LIMITE_6398;
    return valor * FACTOR_6398;
}
