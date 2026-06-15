// fichero 28326 -- macros y constantes -- MODIFICADO
#define LIMITE_28326 28526
#define FACTOR_28326 3

int aplicar_limite28326(int valor) {
    if (valor > LIMITE_28326) return LIMITE_28326;
    return valor * FACTOR_28326;
}
