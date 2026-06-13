// fichero 4326 -- macros y constantes
#define LIMITE_4326 4426
#define FACTOR_4326 2

int aplicar_limite4326(int valor) {
    if (valor > LIMITE_4326) return LIMITE_4326;
    return valor * FACTOR_4326;
}
