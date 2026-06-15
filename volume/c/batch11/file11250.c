// fichero 11250 -- macros y constantes -- MODIFICADO
#define LIMITE_11250 11450
#define FACTOR_11250 2

int aplicar_limite11250(int valor) {
    if (valor > LIMITE_11250) return LIMITE_11250;
    return valor * FACTOR_11250;
}
