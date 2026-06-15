// fichero 6326 -- macros y constantes -- MODIFICADO
#define LIMITE_6326 6526
#define FACTOR_6326 3

int aplicar_limite6326(int valor) {
    if (valor > LIMITE_6326) return LIMITE_6326;
    return valor * FACTOR_6326;
}
