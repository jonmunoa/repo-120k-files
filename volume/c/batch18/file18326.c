// fichero 18326 -- macros y constantes
#define LIMITE_18326 18426
#define FACTOR_18326 2

int aplicar_limite18326(int valor) {
    if (valor > LIMITE_18326) return LIMITE_18326;
    return valor * FACTOR_18326;
}
