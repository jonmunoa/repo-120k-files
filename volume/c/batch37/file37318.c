// fichero 37318 -- macros y constantes -- MODIFICADO
#define LIMITE_37318 37518
#define FACTOR_37318 5

int aplicar_limite37318(int valor) {
    if (valor > LIMITE_37318) return LIMITE_37318;
    return valor * FACTOR_37318;
}
