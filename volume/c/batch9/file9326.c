// fichero 9326 -- macros y constantes
#define LIMITE_9326 9426
#define FACTOR_9326 2

int aplicar_limite9326(int valor) {
    if (valor > LIMITE_9326) return LIMITE_9326;
    return valor * FACTOR_9326;
}
