// fichero 9318 -- macros y constantes -- MODIFICADO
#define LIMITE_9318 9518
#define FACTOR_9318 5

int aplicar_limite9318(int valor) {
    if (valor > LIMITE_9318) return LIMITE_9318;
    return valor * FACTOR_9318;
}
