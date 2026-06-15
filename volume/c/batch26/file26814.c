// fichero 26814 -- macros y constantes -- MODIFICADO
#define LIMITE_26814 27014
#define FACTOR_26814 6

int aplicar_limite26814(int valor) {
    if (valor > LIMITE_26814) return LIMITE_26814;
    return valor * FACTOR_26814;
}
