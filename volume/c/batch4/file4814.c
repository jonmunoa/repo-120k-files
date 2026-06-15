// fichero 4814 -- macros y constantes -- MODIFICADO
#define LIMITE_4814 5014
#define FACTOR_4814 6

int aplicar_limite4814(int valor) {
    if (valor > LIMITE_4814) return LIMITE_4814;
    return valor * FACTOR_4814;
}
