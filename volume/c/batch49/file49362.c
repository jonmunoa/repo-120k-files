// fichero 49362 -- macros y constantes -- MODIFICADO
#define LIMITE_49362 49562
#define FACTOR_49362 4

int aplicar_limite49362(int valor) {
    if (valor > LIMITE_49362) return LIMITE_49362;
    return valor * FACTOR_49362;
}
