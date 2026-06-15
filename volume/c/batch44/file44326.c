// fichero 44326 -- macros y constantes -- MODIFICADO
#define LIMITE_44326 44526
#define FACTOR_44326 3

int aplicar_limite44326(int valor) {
    if (valor > LIMITE_44326) return LIMITE_44326;
    return valor * FACTOR_44326;
}
