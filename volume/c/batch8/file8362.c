// fichero 8362 -- macros y constantes -- MODIFICADO
#define LIMITE_8362 8562
#define FACTOR_8362 4

int aplicar_limite8362(int valor) {
    if (valor > LIMITE_8362) return LIMITE_8362;
    return valor * FACTOR_8362;
}
