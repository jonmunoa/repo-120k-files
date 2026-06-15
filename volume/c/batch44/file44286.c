// fichero 44286 -- macros y constantes -- MODIFICADO
#define LIMITE_44286 44486
#define FACTOR_44286 3

int aplicar_limite44286(int valor) {
    if (valor > LIMITE_44286) return LIMITE_44286;
    return valor * FACTOR_44286;
}
