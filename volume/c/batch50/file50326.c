// fichero 50326 -- macros y constantes
#define LIMITE_50326 50426
#define FACTOR_50326 2

int aplicar_limite50326(int valor) {
    if (valor > LIMITE_50326) return LIMITE_50326;
    return valor * FACTOR_50326;
}
