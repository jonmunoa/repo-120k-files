// fichero 31326 -- macros y constantes -- MODIFICADO
#define LIMITE_31326 31526
#define FACTOR_31326 3

int aplicar_limite31326(int valor) {
    if (valor > LIMITE_31326) return LIMITE_31326;
    return valor * FACTOR_31326;
}
