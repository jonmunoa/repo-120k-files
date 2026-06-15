// fichero 27046 -- macros y constantes -- MODIFICADO
#define LIMITE_27046 27246
#define FACTOR_27046 3

int aplicar_limite27046(int valor) {
    if (valor > LIMITE_27046) return LIMITE_27046;
    return valor * FACTOR_27046;
}
