// fichero 2326 -- macros y constantes -- MODIFICADO
#define LIMITE_2326 2526
#define FACTOR_2326 3

int aplicar_limite2326(int valor) {
    if (valor > LIMITE_2326) return LIMITE_2326;
    return valor * FACTOR_2326;
}
