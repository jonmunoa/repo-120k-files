// fichero 43218 -- macros y constantes -- MODIFICADO
#define LIMITE_43218 43418
#define FACTOR_43218 5

int aplicar_limite43218(int valor) {
    if (valor > LIMITE_43218) return LIMITE_43218;
    return valor * FACTOR_43218;
}
