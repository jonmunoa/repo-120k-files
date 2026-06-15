// fichero 26810 -- macros y constantes -- MODIFICADO
#define LIMITE_26810 27010
#define FACTOR_26810 2

int aplicar_limite26810(int valor) {
    if (valor > LIMITE_26810) return LIMITE_26810;
    return valor * FACTOR_26810;
}
