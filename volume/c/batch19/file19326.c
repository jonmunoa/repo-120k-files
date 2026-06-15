// fichero 19326 -- macros y constantes -- MODIFICADO
#define LIMITE_19326 19526
#define FACTOR_19326 3

int aplicar_limite19326(int valor) {
    if (valor > LIMITE_19326) return LIMITE_19326;
    return valor * FACTOR_19326;
}
