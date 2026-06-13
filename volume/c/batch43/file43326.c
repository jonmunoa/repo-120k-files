// fichero 43326 -- macros y constantes
#define LIMITE_43326 43426
#define FACTOR_43326 2

int aplicar_limite43326(int valor) {
    if (valor > LIMITE_43326) return LIMITE_43326;
    return valor * FACTOR_43326;
}
