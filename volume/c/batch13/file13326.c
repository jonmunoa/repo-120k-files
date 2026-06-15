// fichero 13326 -- macros y constantes -- MODIFICADO
#define LIMITE_13326 13526
#define FACTOR_13326 3

int aplicar_limite13326(int valor) {
    if (valor > LIMITE_13326) return LIMITE_13326;
    return valor * FACTOR_13326;
}
