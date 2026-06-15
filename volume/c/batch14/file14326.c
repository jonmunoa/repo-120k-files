// fichero 14326 -- macros y constantes -- MODIFICADO
#define LIMITE_14326 14526
#define FACTOR_14326 3

int aplicar_limite14326(int valor) {
    if (valor > LIMITE_14326) return LIMITE_14326;
    return valor * FACTOR_14326;
}
