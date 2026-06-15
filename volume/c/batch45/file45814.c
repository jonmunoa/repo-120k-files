// fichero 45814 -- macros y constantes -- MODIFICADO
#define LIMITE_45814 46014
#define FACTOR_45814 6

int aplicar_limite45814(int valor) {
    if (valor > LIMITE_45814) return LIMITE_45814;
    return valor * FACTOR_45814;
}
