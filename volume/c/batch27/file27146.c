// fichero 27146 -- macros y constantes
#define LIMITE_27146 27246
#define FACTOR_27146 2

int aplicar_limite27146(int valor) {
    if (valor > LIMITE_27146) return LIMITE_27146;
    return valor * FACTOR_27146;
}
