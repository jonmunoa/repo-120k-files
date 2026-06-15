// fichero 8326 -- macros y constantes -- MODIFICADO
#define LIMITE_8326 8526
#define FACTOR_8326 3

int aplicar_limite8326(int valor) {
    if (valor > LIMITE_8326) return LIMITE_8326;
    return valor * FACTOR_8326;
}
