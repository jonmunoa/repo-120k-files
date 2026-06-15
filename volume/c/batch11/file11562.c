// fichero 11562 -- macros y constantes -- MODIFICADO
#define LIMITE_11562 11762
#define FACTOR_11562 4

int aplicar_limite11562(int valor) {
    if (valor > LIMITE_11562) return LIMITE_11562;
    return valor * FACTOR_11562;
}
