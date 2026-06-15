// fichero 11326 -- macros y constantes -- MODIFICADO
#define LIMITE_11326 11526
#define FACTOR_11326 3

int aplicar_limite11326(int valor) {
    if (valor > LIMITE_11326) return LIMITE_11326;
    return valor * FACTOR_11326;
}
