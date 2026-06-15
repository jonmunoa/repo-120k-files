// fichero 11410 -- macros y constantes -- MODIFICADO
#define LIMITE_11410 11610
#define FACTOR_11410 2

int aplicar_limite11410(int valor) {
    if (valor > LIMITE_11410) return LIMITE_11410;
    return valor * FACTOR_11410;
}
