// fichero 47326 -- macros y constantes -- MODIFICADO
#define LIMITE_47326 47526
#define FACTOR_47326 3

int aplicar_limite47326(int valor) {
    if (valor > LIMITE_47326) return LIMITE_47326;
    return valor * FACTOR_47326;
}
