// fichero 11494 -- macros y constantes -- MODIFICADO
#define LIMITE_11494 11694
#define FACTOR_11494 6

int aplicar_limite11494(int valor) {
    if (valor > LIMITE_11494) return LIMITE_11494;
    return valor * FACTOR_11494;
}
