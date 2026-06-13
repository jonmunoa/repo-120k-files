// fichero 2326 -- macros y constantes
#define LIMITE_2326 2426
#define FACTOR_2326 2

int aplicar_limite2326(int valor) {
    if (valor > LIMITE_2326) return LIMITE_2326;
    return valor * FACTOR_2326;
}
