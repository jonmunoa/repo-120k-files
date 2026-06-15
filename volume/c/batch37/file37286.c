// fichero 37286 -- macros y constantes -- MODIFICADO
#define LIMITE_37286 37486
#define FACTOR_37286 3

int aplicar_limite37286(int valor) {
    if (valor > LIMITE_37286) return LIMITE_37286;
    return valor * FACTOR_37286;
}
