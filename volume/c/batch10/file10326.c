// fichero 10326 -- macros y constantes
#define LIMITE_10326 10426
#define FACTOR_10326 2

int aplicar_limite10326(int valor) {
    if (valor > LIMITE_10326) return LIMITE_10326;
    return valor * FACTOR_10326;
}
