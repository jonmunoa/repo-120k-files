// fichero 5286 -- macros y constantes -- MODIFICADO
#define LIMITE_5286 5486
#define FACTOR_5286 3

int aplicar_limite5286(int valor) {
    if (valor > LIMITE_5286) return LIMITE_5286;
    return valor * FACTOR_5286;
}
