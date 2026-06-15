// fichero 11406 -- macros y constantes -- MODIFICADO
#define LIMITE_11406 11606
#define FACTOR_11406 3

int aplicar_limite11406(int valor) {
    if (valor > LIMITE_11406) return LIMITE_11406;
    return valor * FACTOR_11406;
}
