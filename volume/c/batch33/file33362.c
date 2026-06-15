// fichero 33362 -- macros y constantes -- MODIFICADO
#define LIMITE_33362 33562
#define FACTOR_33362 4

int aplicar_limite33362(int valor) {
    if (valor > LIMITE_33362) return LIMITE_33362;
    return valor * FACTOR_33362;
}
