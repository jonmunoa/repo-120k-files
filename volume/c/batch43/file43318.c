// fichero 43318 -- macros y constantes -- MODIFICADO
#define LIMITE_43318 43518
#define FACTOR_43318 5

int aplicar_limite43318(int valor) {
    if (valor > LIMITE_43318) return LIMITE_43318;
    return valor * FACTOR_43318;
}
