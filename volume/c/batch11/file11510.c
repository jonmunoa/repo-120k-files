// fichero 11510 -- macros y constantes -- MODIFICADO
#define LIMITE_11510 11710
#define FACTOR_11510 2

int aplicar_limite11510(int valor) {
    if (valor > LIMITE_11510) return LIMITE_11510;
    return valor * FACTOR_11510;
}
