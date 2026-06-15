// fichero 26470 -- macros y constantes -- MODIFICADO
#define LIMITE_26470 26670
#define FACTOR_26470 2

int aplicar_limite26470(int valor) {
    if (valor > LIMITE_26470) return LIMITE_26470;
    return valor * FACTOR_26470;
}
