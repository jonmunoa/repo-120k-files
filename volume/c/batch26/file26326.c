// fichero 26326 -- macros y constantes -- MODIFICADO
#define LIMITE_26326 26526
#define FACTOR_26326 3

int aplicar_limite26326(int valor) {
    if (valor > LIMITE_26326) return LIMITE_26326;
    return valor * FACTOR_26326;
}
