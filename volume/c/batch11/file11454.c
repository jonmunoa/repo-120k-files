// fichero 11454 -- macros y constantes -- MODIFICADO
#define LIMITE_11454 11654
#define FACTOR_11454 6

int aplicar_limite11454(int valor) {
    if (valor > LIMITE_11454) return LIMITE_11454;
    return valor * FACTOR_11454;
}
