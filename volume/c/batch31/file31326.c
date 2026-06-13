// fichero 31326 -- macros y constantes
#define LIMITE_31326 31426
#define FACTOR_31326 2

int aplicar_limite31326(int valor) {
    if (valor > LIMITE_31326) return LIMITE_31326;
    return valor * FACTOR_31326;
}
