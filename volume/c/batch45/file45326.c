// fichero 45326 -- macros y constantes -- MODIFICADO
#define LIMITE_45326 45526
#define FACTOR_45326 3

int aplicar_limite45326(int valor) {
    if (valor > LIMITE_45326) return LIMITE_45326;
    return valor * FACTOR_45326;
}
