// fichero 28318 -- macros y constantes -- MODIFICADO
#define LIMITE_28318 28518
#define FACTOR_28318 5

int aplicar_limite28318(int valor) {
    if (valor > LIMITE_28318) return LIMITE_28318;
    return valor * FACTOR_28318;
}
