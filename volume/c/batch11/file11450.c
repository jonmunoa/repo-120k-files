// fichero 11450 -- macros y constantes -- MODIFICADO
#define LIMITE_11450 11650
#define FACTOR_11450 2

int aplicar_limite11450(int valor) {
    if (valor > LIMITE_11450) return LIMITE_11450;
    return valor * FACTOR_11450;
}
