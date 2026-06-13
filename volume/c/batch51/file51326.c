// fichero 51326 -- macros y constantes
#define LIMITE_51326 51426
#define FACTOR_51326 2

int aplicar_limite51326(int valor) {
    if (valor > LIMITE_51326) return LIMITE_51326;
    return valor * FACTOR_51326;
}
