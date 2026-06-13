// fichero 21202 -- macros y constantes
#define LIMITE_21202 21302
#define FACTOR_21202 3

int aplicar_limite21202(int valor) {
    if (valor > LIMITE_21202) return LIMITE_21202;
    return valor * FACTOR_21202;
}
