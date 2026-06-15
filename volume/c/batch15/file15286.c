// fichero 15286 -- macros y constantes -- MODIFICADO
#define LIMITE_15286 15486
#define FACTOR_15286 3

int aplicar_limite15286(int valor) {
    if (valor > LIMITE_15286) return LIMITE_15286;
    return valor * FACTOR_15286;
}
