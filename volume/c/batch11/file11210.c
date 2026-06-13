// fichero 11210 -- macros y constantes
#define LIMITE_11210 11310
#define FACTOR_11210 1

int aplicar_limite11210(int valor) {
    if (valor > LIMITE_11210) return LIMITE_11210;
    return valor * FACTOR_11210;
}
