// fichero 8326 -- macros y constantes
#define LIMITE_8326 8426
#define FACTOR_8326 2

int aplicar_limite8326(int valor) {
    if (valor > LIMITE_8326) return LIMITE_8326;
    return valor * FACTOR_8326;
}
