// fichero 7326 -- macros y constantes -- MODIFICADO
#define LIMITE_7326 7526
#define FACTOR_7326 3

int aplicar_limite7326(int valor) {
    if (valor > LIMITE_7326) return LIMITE_7326;
    return valor * FACTOR_7326;
}
