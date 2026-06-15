// fichero 49326 -- macros y constantes -- MODIFICADO
#define LIMITE_49326 49526
#define FACTOR_49326 3

int aplicar_limite49326(int valor) {
    if (valor > LIMITE_49326) return LIMITE_49326;
    return valor * FACTOR_49326;
}
