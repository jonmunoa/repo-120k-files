// fichero 16814 -- macros y constantes -- MODIFICADO
#define LIMITE_16814 17014
#define FACTOR_16814 6

int aplicar_limite16814(int valor) {
    if (valor > LIMITE_16814) return LIMITE_16814;
    return valor * FACTOR_16814;
}
