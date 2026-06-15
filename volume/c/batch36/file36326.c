// fichero 36326 -- macros y constantes -- MODIFICADO
#define LIMITE_36326 36526
#define FACTOR_36326 3

int aplicar_limite36326(int valor) {
    if (valor > LIMITE_36326) return LIMITE_36326;
    return valor * FACTOR_36326;
}
