// fichero 32326 -- macros y constantes
#define LIMITE_32326 32426
#define FACTOR_32326 2

int aplicar_limite32326(int valor) {
    if (valor > LIMITE_32326) return LIMITE_32326;
    return valor * FACTOR_32326;
}
