// fichero 21318 -- macros y constantes -- MODIFICADO
#define LIMITE_21318 21518
#define FACTOR_21318 5

int aplicar_limite21318(int valor) {
    if (valor > LIMITE_21318) return LIMITE_21318;
    return valor * FACTOR_21318;
}
