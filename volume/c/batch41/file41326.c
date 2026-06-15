// fichero 41326 -- macros y constantes -- MODIFICADO
#define LIMITE_41326 41526
#define FACTOR_41326 3

int aplicar_limite41326(int valor) {
    if (valor > LIMITE_41326) return LIMITE_41326;
    return valor * FACTOR_41326;
}
