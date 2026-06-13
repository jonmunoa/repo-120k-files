// fichero 16326 -- macros y constantes
#define LIMITE_16326 16426
#define FACTOR_16326 2

int aplicar_limite16326(int valor) {
    if (valor > LIMITE_16326) return LIMITE_16326;
    return valor * FACTOR_16326;
}
