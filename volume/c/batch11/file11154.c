// fichero 11154 -- macros y constantes -- MODIFICADO
#define LIMITE_11154 11354
#define FACTOR_11154 6

int aplicar_limite11154(int valor) {
    if (valor > LIMITE_11154) return LIMITE_11154;
    return valor * FACTOR_11154;
}
