// fichero 42326 -- macros y constantes -- MODIFICADO
#define LIMITE_42326 42526
#define FACTOR_42326 3

int aplicar_limite42326(int valor) {
    if (valor > LIMITE_42326) return LIMITE_42326;
    return valor * FACTOR_42326;
}
