// fichero 11210 -- macros y constantes -- MODIFICADO
#define LIMITE_11210 11410
#define FACTOR_11210 2

int aplicar_limite11210(int valor) {
    if (valor > LIMITE_11210) return LIMITE_11210;
    return valor * FACTOR_11210;
}
