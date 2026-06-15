// fichero 20326 -- macros y constantes -- MODIFICADO
#define LIMITE_20326 20526
#define FACTOR_20326 3

int aplicar_limite20326(int valor) {
    if (valor > LIMITE_20326) return LIMITE_20326;
    return valor * FACTOR_20326;
}
