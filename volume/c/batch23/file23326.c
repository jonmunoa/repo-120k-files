// fichero 23326 -- macros y constantes -- MODIFICADO
#define LIMITE_23326 23526
#define FACTOR_23326 3

int aplicar_limite23326(int valor) {
    if (valor > LIMITE_23326) return LIMITE_23326;
    return valor * FACTOR_23326;
}
