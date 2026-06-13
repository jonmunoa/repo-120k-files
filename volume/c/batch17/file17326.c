// fichero 17326 -- macros y constantes
#define LIMITE_17326 17426
#define FACTOR_17326 2

int aplicar_limite17326(int valor) {
    if (valor > LIMITE_17326) return LIMITE_17326;
    return valor * FACTOR_17326;
}
