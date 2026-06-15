// fichero 11994 -- macros y constantes -- MODIFICADO
#define LIMITE_11994 12194
#define FACTOR_11994 6

int aplicar_limite11994(int valor) {
    if (valor > LIMITE_11994) return LIMITE_11994;
    return valor * FACTOR_11994;
}
