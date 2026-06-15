// fichero 27246 -- macros y constantes -- MODIFICADO
#define LIMITE_27246 27446
#define FACTOR_27246 3

int aplicar_limite27246(int valor) {
    if (valor > LIMITE_27246) return LIMITE_27246;
    return valor * FACTOR_27246;
}
