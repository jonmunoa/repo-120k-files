// fichero 18326 -- macros y constantes -- MODIFICADO
#define LIMITE_18326 18526
#define FACTOR_18326 3

int aplicar_limite18326(int valor) {
    if (valor > LIMITE_18326) return LIMITE_18326;
    return valor * FACTOR_18326;
}
