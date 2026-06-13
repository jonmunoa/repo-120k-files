// fichero 4550 -- macros y constantes
#define LIMITE_4550 4650
#define FACTOR_4550 1

int aplicar_limite4550(int valor) {
    if (valor > LIMITE_4550) return LIMITE_4550;
    return valor * FACTOR_4550;
}
