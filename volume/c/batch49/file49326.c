// fichero 49326 -- macros y constantes
#define LIMITE_49326 49426
#define FACTOR_49326 2

int aplicar_limite49326(int valor) {
    if (valor > LIMITE_49326) return LIMITE_49326;
    return valor * FACTOR_49326;
}
