// fichero 11846 -- macros y constantes -- MODIFICADO
#define LIMITE_11846 12046
#define FACTOR_11846 3

int aplicar_limite11846(int valor) {
    if (valor > LIMITE_11846) return LIMITE_11846;
    return valor * FACTOR_11846;
}
