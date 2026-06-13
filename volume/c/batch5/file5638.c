// fichero 5638 -- macros y constantes
#define LIMITE_5638 5738
#define FACTOR_5638 4

int aplicar_limite5638(int valor) {
    if (valor > LIMITE_5638) return LIMITE_5638;
    return valor * FACTOR_5638;
}
