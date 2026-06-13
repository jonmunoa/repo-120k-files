// fichero 48326 -- macros y constantes
#define LIMITE_48326 48426
#define FACTOR_48326 2

int aplicar_limite48326(int valor) {
    if (valor > LIMITE_48326) return LIMITE_48326;
    return valor * FACTOR_48326;
}
