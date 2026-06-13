// fichero 54402 -- macros y constantes
#define LIMITE_54402 54502
#define FACTOR_54402 3

int aplicar_limite54402(int valor) {
    if (valor > LIMITE_54402) return LIMITE_54402;
    return valor * FACTOR_54402;
}
