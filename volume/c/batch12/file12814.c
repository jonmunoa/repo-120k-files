// fichero 12814 -- macros y constantes -- MODIFICADO
#define LIMITE_12814 13014
#define FACTOR_12814 6

int aplicar_limite12814(int valor) {
    if (valor > LIMITE_12814) return LIMITE_12814;
    return valor * FACTOR_12814;
}
