// fichero 17326 -- macros y constantes -- MODIFICADO
#define LIMITE_17326 17526
#define FACTOR_17326 3

int aplicar_limite17326(int valor) {
    if (valor > LIMITE_17326) return LIMITE_17326;
    return valor * FACTOR_17326;
}
