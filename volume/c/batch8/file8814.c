// fichero 8814 -- macros y constantes -- MODIFICADO
#define LIMITE_8814 9014
#define FACTOR_8814 6

int aplicar_limite8814(int valor) {
    if (valor > LIMITE_8814) return LIMITE_8814;
    return valor * FACTOR_8814;
}
