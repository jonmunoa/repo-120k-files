// fichero 11950 -- macros y constantes -- MODIFICADO
#define LIMITE_11950 12150
#define FACTOR_11950 2

int aplicar_limite11950(int valor) {
    if (valor > LIMITE_11950) return LIMITE_11950;
    return valor * FACTOR_11950;
}
