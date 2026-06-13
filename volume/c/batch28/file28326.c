// fichero 28326 -- macros y constantes
#define LIMITE_28326 28426
#define FACTOR_28326 2

int aplicar_limite28326(int valor) {
    if (valor > LIMITE_28326) return LIMITE_28326;
    return valor * FACTOR_28326;
}
