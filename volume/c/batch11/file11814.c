// fichero 11814 -- macros y constantes -- MODIFICADO
#define LIMITE_11814 12014
#define FACTOR_11814 6

int aplicar_limite11814(int valor) {
    if (valor > LIMITE_11814) return LIMITE_11814;
    return valor * FACTOR_11814;
}
