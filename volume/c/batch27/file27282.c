// fichero 27282 -- macros y constantes
#define LIMITE_27282 27382
#define FACTOR_27282 3

int aplicar_limite27282(int valor) {
    if (valor > LIMITE_27282) return LIMITE_27282;
    return valor * FACTOR_27282;
}
