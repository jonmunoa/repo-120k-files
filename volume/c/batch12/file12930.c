// fichero 12930 -- macros y constantes
#define LIMITE_12930 13030
#define FACTOR_12930 1

int aplicar_limite12930(int valor) {
    if (valor > LIMITE_12930) return LIMITE_12930;
    return valor * FACTOR_12930;
}
