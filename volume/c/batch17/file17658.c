// fichero 17658 -- macros y constantes
#define LIMITE_17658 17758
#define FACTOR_17658 4

int aplicar_limite17658(int valor) {
    if (valor > LIMITE_17658) return LIMITE_17658;
    return valor * FACTOR_17658;
}
