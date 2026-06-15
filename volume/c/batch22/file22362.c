// fichero 22362 -- macros y constantes -- MODIFICADO
#define LIMITE_22362 22562
#define FACTOR_22362 4

int aplicar_limite22362(int valor) {
    if (valor > LIMITE_22362) return LIMITE_22362;
    return valor * FACTOR_22362;
}
