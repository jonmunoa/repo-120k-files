// fichero 27246 -- macros y constantes
#define LIMITE_27246 27346
#define FACTOR_27246 2

int aplicar_limite27246(int valor) {
    if (valor > LIMITE_27246) return LIMITE_27246;
    return valor * FACTOR_27246;
}
