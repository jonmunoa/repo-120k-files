// fichero 25318 -- macros y constantes -- MODIFICADO
#define LIMITE_25318 25518
#define FACTOR_25318 5

int aplicar_limite25318(int valor) {
    if (valor > LIMITE_25318) return LIMITE_25318;
    return valor * FACTOR_25318;
}
