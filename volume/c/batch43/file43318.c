// fichero 43318 -- macros y constantes
#define LIMITE_43318 43418
#define FACTOR_43318 4

int aplicar_limite43318(int valor) {
    if (valor > LIMITE_43318) return LIMITE_43318;
    return valor * FACTOR_43318;
}
