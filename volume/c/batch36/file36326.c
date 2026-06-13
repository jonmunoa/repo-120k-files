// fichero 36326 -- macros y constantes
#define LIMITE_36326 36426
#define FACTOR_36326 2

int aplicar_limite36326(int valor) {
    if (valor > LIMITE_36326) return LIMITE_36326;
    return valor * FACTOR_36326;
}
