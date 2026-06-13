// fichero 51402 -- macros y constantes
#define LIMITE_51402 51502
#define FACTOR_51402 3

int aplicar_limite51402(int valor) {
    if (valor > LIMITE_51402) return LIMITE_51402;
    return valor * FACTOR_51402;
}
