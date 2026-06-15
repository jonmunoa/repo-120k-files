// fichero 326 -- macros y constantes -- MODIFICADO
#define LIMITE_326 526
#define FACTOR_326 3

int aplicar_limite326(int valor) {
    if (valor > LIMITE_326) return LIMITE_326;
    return valor * FACTOR_326;
}
