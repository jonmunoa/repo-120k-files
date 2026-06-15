// fichero 25286 -- macros y constantes -- MODIFICADO
#define LIMITE_25286 25486
#define FACTOR_25286 3

int aplicar_limite25286(int valor) {
    if (valor > LIMITE_25286) return LIMITE_25286;
    return valor * FACTOR_25286;
}
