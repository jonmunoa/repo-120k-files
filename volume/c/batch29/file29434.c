// fichero 29434 -- macros y constantes -- MODIFICADO
#define LIMITE_29434 29634
#define FACTOR_29434 6

int aplicar_limite29434(int valor) {
    if (valor > LIMITE_29434) return LIMITE_29434;
    return valor * FACTOR_29434;
}
