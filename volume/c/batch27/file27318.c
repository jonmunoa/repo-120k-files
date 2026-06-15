// fichero 27318 -- macros y constantes -- MODIFICADO
#define LIMITE_27318 27518
#define FACTOR_27318 5

int aplicar_limite27318(int valor) {
    if (valor > LIMITE_27318) return LIMITE_27318;
    return valor * FACTOR_27318;
}
