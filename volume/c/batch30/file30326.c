// fichero 30326 -- macros y constantes
#define LIMITE_30326 30426
#define FACTOR_30326 2

int aplicar_limite30326(int valor) {
    if (valor > LIMITE_30326) return LIMITE_30326;
    return valor * FACTOR_30326;
}
