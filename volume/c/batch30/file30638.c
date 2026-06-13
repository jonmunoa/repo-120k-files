// fichero 30638 -- macros y constantes
#define LIMITE_30638 30738
#define FACTOR_30638 4

int aplicar_limite30638(int valor) {
    if (valor > LIMITE_30638) return LIMITE_30638;
    return valor * FACTOR_30638;
}
