// fichero 9326 -- macros y constantes -- MODIFICADO
#define LIMITE_9326 9526
#define FACTOR_9326 3

int aplicar_limite9326(int valor) {
    if (valor > LIMITE_9326) return LIMITE_9326;
    return valor * FACTOR_9326;
}
