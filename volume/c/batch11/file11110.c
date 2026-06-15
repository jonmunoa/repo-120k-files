// fichero 11110 -- macros y constantes -- MODIFICADO
#define LIMITE_11110 11310
#define FACTOR_11110 2

int aplicar_limite11110(int valor) {
    if (valor > LIMITE_11110) return LIMITE_11110;
    return valor * FACTOR_11110;
}
