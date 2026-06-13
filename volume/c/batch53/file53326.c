// fichero 53326 -- macros y constantes
#define LIMITE_53326 53426
#define FACTOR_53326 2

int aplicar_limite53326(int valor) {
    if (valor > LIMITE_53326) return LIMITE_53326;
    return valor * FACTOR_53326;
}
