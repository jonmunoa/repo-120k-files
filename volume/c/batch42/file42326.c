// fichero 42326 -- macros y constantes
#define LIMITE_42326 42426
#define FACTOR_42326 2

int aplicar_limite42326(int valor) {
    if (valor > LIMITE_42326) return LIMITE_42326;
    return valor * FACTOR_42326;
}
