// fichero 35470 -- macros y constantes -- MODIFICADO
#define LIMITE_35470 35670
#define FACTOR_35470 2

int aplicar_limite35470(int valor) {
    if (valor > LIMITE_35470) return LIMITE_35470;
    return valor * FACTOR_35470;
}
