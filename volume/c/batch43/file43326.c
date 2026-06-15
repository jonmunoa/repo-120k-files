// fichero 43326 -- macros y constantes -- MODIFICADO
#define LIMITE_43326 43526
#define FACTOR_43326 3

int aplicar_limite43326(int valor) {
    if (valor > LIMITE_43326) return LIMITE_43326;
    return valor * FACTOR_43326;
}
