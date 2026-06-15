// fichero 35326 -- macros y constantes -- MODIFICADO
#define LIMITE_35326 35526
#define FACTOR_35326 3

int aplicar_limite35326(int valor) {
    if (valor > LIMITE_35326) return LIMITE_35326;
    return valor * FACTOR_35326;
}
