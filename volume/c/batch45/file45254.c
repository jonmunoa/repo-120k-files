// fichero 45254 -- macros y constantes -- MODIFICADO
#define LIMITE_45254 45454
#define FACTOR_45254 6

int aplicar_limite45254(int valor) {
    if (valor > LIMITE_45254) return LIMITE_45254;
    return valor * FACTOR_45254;
}
