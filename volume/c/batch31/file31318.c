// fichero 31318 -- macros y constantes -- MODIFICADO
#define LIMITE_31318 31518
#define FACTOR_31318 5

int aplicar_limite31318(int valor) {
    if (valor > LIMITE_31318) return LIMITE_31318;
    return valor * FACTOR_31318;
}
