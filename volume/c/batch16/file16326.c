// fichero 16326 -- macros y constantes -- MODIFICADO
#define LIMITE_16326 16526
#define FACTOR_16326 3

int aplicar_limite16326(int valor) {
    if (valor > LIMITE_16326) return LIMITE_16326;
    return valor * FACTOR_16326;
}
