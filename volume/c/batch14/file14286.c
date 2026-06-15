// fichero 14286 -- macros y constantes -- MODIFICADO
#define LIMITE_14286 14486
#define FACTOR_14286 3

int aplicar_limite14286(int valor) {
    if (valor > LIMITE_14286) return LIMITE_14286;
    return valor * FACTOR_14286;
}
