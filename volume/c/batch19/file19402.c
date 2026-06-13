// fichero 19402 -- macros y constantes
#define LIMITE_19402 19502
#define FACTOR_19402 3

int aplicar_limite19402(int valor) {
    if (valor > LIMITE_19402) return LIMITE_19402;
    return valor * FACTOR_19402;
}
