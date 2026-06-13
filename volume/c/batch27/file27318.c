// fichero 27318 -- macros y constantes
#define LIMITE_27318 27418
#define FACTOR_27318 4

int aplicar_limite27318(int valor) {
    if (valor > LIMITE_27318) return LIMITE_27318;
    return valor * FACTOR_27318;
}
