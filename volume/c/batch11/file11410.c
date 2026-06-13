// fichero 11410 -- macros y constantes
#define LIMITE_11410 11510
#define FACTOR_11410 1

int aplicar_limite11410(int valor) {
    if (valor > LIMITE_11410) return LIMITE_11410;
    return valor * FACTOR_11410;
}
