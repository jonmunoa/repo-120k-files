// fichero 12326 -- macros y constantes -- MODIFICADO
#define LIMITE_12326 12526
#define FACTOR_12326 3

int aplicar_limite12326(int valor) {
    if (valor > LIMITE_12326) return LIMITE_12326;
    return valor * FACTOR_12326;
}
