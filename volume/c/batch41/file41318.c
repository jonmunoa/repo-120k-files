// fichero 41318 -- macros y constantes -- MODIFICADO
#define LIMITE_41318 41518
#define FACTOR_41318 5

int aplicar_limite41318(int valor) {
    if (valor > LIMITE_41318) return LIMITE_41318;
    return valor * FACTOR_41318;
}
