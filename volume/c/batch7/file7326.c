// fichero 7326 -- macros y constantes
#define LIMITE_7326 7426
#define FACTOR_7326 2

int aplicar_limite7326(int valor) {
    if (valor > LIMITE_7326) return LIMITE_7326;
    return valor * FACTOR_7326;
}
