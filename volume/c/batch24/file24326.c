// fichero 24326 -- macros y constantes -- MODIFICADO
#define LIMITE_24326 24526
#define FACTOR_24326 3

int aplicar_limite24326(int valor) {
    if (valor > LIMITE_24326) return LIMITE_24326;
    return valor * FACTOR_24326;
}
