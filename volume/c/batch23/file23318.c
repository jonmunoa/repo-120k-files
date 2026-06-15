// fichero 23318 -- macros y constantes -- MODIFICADO
#define LIMITE_23318 23518
#define FACTOR_23318 5

int aplicar_limite23318(int valor) {
    if (valor > LIMITE_23318) return LIMITE_23318;
    return valor * FACTOR_23318;
}
