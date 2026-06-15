// fichero 39326 -- macros y constantes -- MODIFICADO
#define LIMITE_39326 39526
#define FACTOR_39326 3

int aplicar_limite39326(int valor) {
    if (valor > LIMITE_39326) return LIMITE_39326;
    return valor * FACTOR_39326;
}
