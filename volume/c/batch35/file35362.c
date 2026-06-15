// fichero 35362 -- macros y constantes -- MODIFICADO
#define LIMITE_35362 35562
#define FACTOR_35362 4

int aplicar_limite35362(int valor) {
    if (valor > LIMITE_35362) return LIMITE_35362;
    return valor * FACTOR_35362;
}
