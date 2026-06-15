// fichero 37326 -- macros y constantes -- MODIFICADO
#define LIMITE_37326 37526
#define FACTOR_37326 3

int aplicar_limite37326(int valor) {
    if (valor > LIMITE_37326) return LIMITE_37326;
    return valor * FACTOR_37326;
}
