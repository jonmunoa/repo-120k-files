// fichero 46326 -- macros y constantes
#define LIMITE_46326 46426
#define FACTOR_46326 2

int aplicar_limite46326(int valor) {
    if (valor > LIMITE_46326) return LIMITE_46326;
    return valor * FACTOR_46326;
}
