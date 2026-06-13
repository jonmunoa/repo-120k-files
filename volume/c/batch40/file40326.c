// fichero 40326 -- macros y constantes
#define LIMITE_40326 40426
#define FACTOR_40326 2

int aplicar_limite40326(int valor) {
    if (valor > LIMITE_40326) return LIMITE_40326;
    return valor * FACTOR_40326;
}
