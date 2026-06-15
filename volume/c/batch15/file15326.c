// fichero 15326 -- macros y constantes -- MODIFICADO
#define LIMITE_15326 15526
#define FACTOR_15326 3

int aplicar_limite15326(int valor) {
    if (valor > LIMITE_15326) return LIMITE_15326;
    return valor * FACTOR_15326;
}
