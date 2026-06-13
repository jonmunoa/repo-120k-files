// fichero 10266 -- macros y constantes
#define LIMITE_10266 10366
#define FACTOR_10266 2

int aplicar_limite10266(int valor) {
    if (valor > LIMITE_10266) return LIMITE_10266;
    return valor * FACTOR_10266;
}
