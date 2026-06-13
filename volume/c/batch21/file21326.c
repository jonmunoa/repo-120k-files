// fichero 21326 -- macros y constantes
#define LIMITE_21326 21426
#define FACTOR_21326 2

int aplicar_limite21326(int valor) {
    if (valor > LIMITE_21326) return LIMITE_21326;
    return valor * FACTOR_21326;
}
