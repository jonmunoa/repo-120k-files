// fichero 53638 -- macros y constantes
#define LIMITE_53638 53738
#define FACTOR_53638 4

int aplicar_limite53638(int valor) {
    if (valor > LIMITE_53638) return LIMITE_53638;
    return valor * FACTOR_53638;
}
