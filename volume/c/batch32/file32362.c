// fichero 32362 -- macros y constantes -- MODIFICADO
#define LIMITE_32362 32562
#define FACTOR_32362 4

int aplicar_limite32362(int valor) {
    if (valor > LIMITE_32362) return LIMITE_32362;
    return valor * FACTOR_32362;
}
