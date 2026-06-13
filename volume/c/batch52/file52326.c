// fichero 52326 -- macros y constantes
#define LIMITE_52326 52426
#define FACTOR_52326 2

int aplicar_limite52326(int valor) {
    if (valor > LIMITE_52326) return LIMITE_52326;
    return valor * FACTOR_52326;
}
