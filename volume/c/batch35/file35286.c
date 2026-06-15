// fichero 35286 -- macros y constantes -- MODIFICADO
#define LIMITE_35286 35486
#define FACTOR_35286 3

int aplicar_limite35286(int valor) {
    if (valor > LIMITE_35286) return LIMITE_35286;
    return valor * FACTOR_35286;
}
