// fichero 6078 -- macros y constantes
#define LIMITE_6078 6178
#define FACTOR_6078 4

int aplicar_limite6078(int valor) {
    if (valor > LIMITE_6078) return LIMITE_6078;
    return valor * FACTOR_6078;
}
