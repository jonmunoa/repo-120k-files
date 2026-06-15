// fichero 20438 -- macros y constantes -- MODIFICADO
#define LIMITE_20438 20638
#define FACTOR_20438 5

int aplicar_limite20438(int valor) {
    if (valor > LIMITE_20438) return LIMITE_20438;
    return valor * FACTOR_20438;
}
