// fichero 10326 -- macros y constantes -- MODIFICADO
#define LIMITE_10326 10526
#define FACTOR_10326 3

int aplicar_limite10326(int valor) {
    if (valor > LIMITE_10326) return LIMITE_10326;
    return valor * FACTOR_10326;
}
