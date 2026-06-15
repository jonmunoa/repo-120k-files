// fichero 11690 -- macros y constantes -- MODIFICADO
#define LIMITE_11690 11890
#define FACTOR_11690 2

int aplicar_limite11690(int valor) {
    if (valor > LIMITE_11690) return LIMITE_11690;
    return valor * FACTOR_11690;
}
