// fichero 5326 -- macros y constantes -- MODIFICADO
#define LIMITE_5326 5526
#define FACTOR_5326 3

int aplicar_limite5326(int valor) {
    if (valor > LIMITE_5326) return LIMITE_5326;
    return valor * FACTOR_5326;
}
