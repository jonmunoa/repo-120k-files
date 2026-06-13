// fichero 24402 -- macros y constantes
#define LIMITE_24402 24502
#define FACTOR_24402 3

int aplicar_limite24402(int valor) {
    if (valor > LIMITE_24402) return LIMITE_24402;
    return valor * FACTOR_24402;
}
