// fichero 30326 -- macros y constantes -- MODIFICADO
#define LIMITE_30326 30526
#define FACTOR_30326 3

int aplicar_limite30326(int valor) {
    if (valor > LIMITE_30326) return LIMITE_30326;
    return valor * FACTOR_30326;
}
