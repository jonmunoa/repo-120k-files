// fichero 48326 -- macros y constantes -- MODIFICADO
#define LIMITE_48326 48526
#define FACTOR_48326 3

int aplicar_limite48326(int valor) {
    if (valor > LIMITE_48326) return LIMITE_48326;
    return valor * FACTOR_48326;
}
