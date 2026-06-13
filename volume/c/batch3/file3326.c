// fichero 3326 -- macros y constantes
#define LIMITE_3326 3426
#define FACTOR_3326 2

int aplicar_limite3326(int valor) {
    if (valor > LIMITE_3326) return LIMITE_3326;
    return valor * FACTOR_3326;
}
