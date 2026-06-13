// fichero 41326 -- macros y constantes
#define LIMITE_41326 41426
#define FACTOR_41326 2

int aplicar_limite41326(int valor) {
    if (valor > LIMITE_41326) return LIMITE_41326;
    return valor * FACTOR_41326;
}
