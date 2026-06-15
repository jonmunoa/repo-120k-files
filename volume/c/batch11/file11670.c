// fichero 11670 -- macros y constantes -- MODIFICADO
#define LIMITE_11670 11870
#define FACTOR_11670 2

int aplicar_limite11670(int valor) {
    if (valor > LIMITE_11670) return LIMITE_11670;
    return valor * FACTOR_11670;
}
