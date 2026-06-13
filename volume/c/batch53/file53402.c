// fichero 53402 -- macros y constantes
#define LIMITE_53402 53502
#define FACTOR_53402 3

int aplicar_limite53402(int valor) {
    if (valor > LIMITE_53402) return LIMITE_53402;
    return valor * FACTOR_53402;
}
