// fichero 326 -- macros y constantes
#define LIMITE_326 426
#define FACTOR_326 2

int aplicar_limite326(int valor) {
    if (valor > LIMITE_326) return LIMITE_326;
    return valor * FACTOR_326;
}
