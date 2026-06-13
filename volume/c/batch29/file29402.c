// fichero 29402 -- macros y constantes
#define LIMITE_29402 29502
#define FACTOR_29402 3

int aplicar_limite29402(int valor) {
    if (valor > LIMITE_29402) return LIMITE_29402;
    return valor * FACTOR_29402;
}
