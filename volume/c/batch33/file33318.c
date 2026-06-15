// fichero 33318 -- macros y constantes -- MODIFICADO
#define LIMITE_33318 33518
#define FACTOR_33318 5

int aplicar_limite33318(int valor) {
    if (valor > LIMITE_33318) return LIMITE_33318;
    return valor * FACTOR_33318;
}
