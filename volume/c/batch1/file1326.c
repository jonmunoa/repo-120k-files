// fichero 1326 -- macros y constantes -- MODIFICADO
#define LIMITE_1326 1526
#define FACTOR_1326 3

int aplicar_limite1326(int valor) {
    if (valor > LIMITE_1326) return LIMITE_1326;
    return valor * FACTOR_1326;
}
