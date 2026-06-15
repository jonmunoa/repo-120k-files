// fichero 1398 -- macros y constantes -- MODIFICADO
#define LIMITE_1398 1598
#define FACTOR_1398 5

int aplicar_limite1398(int valor) {
    if (valor > LIMITE_1398) return LIMITE_1398;
    return valor * FACTOR_1398;
}
