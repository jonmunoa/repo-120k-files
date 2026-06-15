// fichero 35814 -- macros y constantes -- MODIFICADO
#define LIMITE_35814 36014
#define FACTOR_35814 6

int aplicar_limite35814(int valor) {
    if (valor > LIMITE_35814) return LIMITE_35814;
    return valor * FACTOR_35814;
}
