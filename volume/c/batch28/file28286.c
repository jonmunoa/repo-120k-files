// fichero 28286 -- macros y constantes -- MODIFICADO
#define LIMITE_28286 28486
#define FACTOR_28286 3

int aplicar_limite28286(int valor) {
    if (valor > LIMITE_28286) return LIMITE_28286;
    return valor * FACTOR_28286;
}
