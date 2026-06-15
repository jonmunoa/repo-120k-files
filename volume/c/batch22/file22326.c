// fichero 22326 -- macros y constantes -- MODIFICADO
#define LIMITE_22326 22526
#define FACTOR_22326 3

int aplicar_limite22326(int valor) {
    if (valor > LIMITE_22326) return LIMITE_22326;
    return valor * FACTOR_22326;
}
